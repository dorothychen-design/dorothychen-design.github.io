#include <LiquidCrystal_I2C.h>
#include <AccelStepper.h>
#include <math.h>


// steps per sec
// 200 per 1 rotation as 1.8 degrees per step
// 1000 steps per second as max
// default rotation clockwise


// constants
float volumetric_flow_rate = 5; // ml / min
int total_volume = 20; // in mL
int thread = 2; // 8 or 2
float inner_radius = 9.525; // 7.20 (small), 9.525 (large)
float step_speed = (volumetric_flow_rate * 1000 * 200 * 16) / (60 * M_PI * pow(inner_radius, 2) * thread); // 16 in numerator for microstep


// pins
AccelStepper stepper(AccelStepper::DRIVER, 3, 2);  // step, direction pins
int forward_button = 7;
int backward_button = 8;
int on_button = 12;
int limit_switch_button = 13;
int red_led = 11;
int blue_led = 9;
int green_led = 10;


// input vars
int pump_on; // 1 = Off, 0 = On
int done_dispensing; // 1 = Closed (done), 0 = Open (not done);
int move_forward; // Active low
int move_backward; // Active low


// lcd display config and time settings
int total_time = total_volume / volumetric_flow_rate;
int total_secs = total_time * 60;
int currMillis;
unsigned int previousMillis = 0;
const int interval = 1000;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
pinMode(limit_switch_button, INPUT_PULLUP); // default 0
  pinMode(backward_button, INPUT_PULLUP);  // default 1
  pinMode(forward_button, INPUT_PULLUP); // default 1
  pinMode(on_button, INPUT_PULLUP); // don't know the default for on
  pinMode(red_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(green_led, OUTPUT);


  stepper.setMaxSpeed(1000);


  // lcd display code
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0); // set the cursor to column 3, line 0
  lcd.print("Flow Rate:" + String(volumetric_flow_rate) + "mL/m");  // Print a message to the LCD
  lcd.setCursor(0, 1); // set the cursor to column 2, line 1
  lcd.print("Time left: " + String(total_secs) + "s");
}


void loop() {
  // Read inputs
  pump_on = digitalRead(on_button);
  done_dispensing = digitalRead(limit_switch_button);


  // Button pressed, try to dispense
  if (pump_on == LOW) {
    // LS is closed, done dispensing. Wait for Button deactivation.
    if (done_dispensing == HIGH) {
      // Set LED Color
      analogWrite(red_led, 120);
      analogWrite(green_led, 0);
      analogWrite(blue_led, 0);


      // Stop motor
      stepper.stop();
      lcd.setCursor(0, 1); // set the cursor to column 2, line 1
      lcd.print("Time left: 0s     ");
    }
   
    // LS is open, keep dispensing
    else if (done_dispensing == LOW) {
      // Set LED color
      analogWrite(red_led, 0);
      analogWrite(green_led, 120);
      analogWrite(blue_led, 0);
   
      // Set motor to dispense at calculated flow rate
      stepper.setSpeed(-1 * step_speed);
      stepper.runSpeed();


      // Update LCD
      currMillis = millis();
      if (currMillis - previousMillis >= interval) {
      previousMillis = currMillis;
      lcd.setCursor(0, 1);
      lcd.print("Time left: " + String(int(round(total_secs - previousMillis / 1000))) + "s   ");  // Print a message to the LCD.
      }
    }
  }
  // ELSE: Switch is open, switch to manual operation.
  else if (pump_on == HIGH) {
    // "Reset" current "time"
    previousMillis = millis();


    // Read manual inputs
    move_forward = digitalRead(forward_button);
    move_backward = digitalRead(backward_button);
   
    // Set LED color
    analogWrite(red_led, 120);
    analogWrite(green_led, 120);
    analogWrite(blue_led, 0);


    if (move_forward == LOW) {
      // Move forward as fast as possible
      stepper.setSpeed(-1000);
      stepper.runSpeed();
    }
    else if (move_backward == LOW) {
      // Move backward as fast as possible
      stepper.setSpeed(1000);
      stepper.runSpeed();
    }
  }
}



