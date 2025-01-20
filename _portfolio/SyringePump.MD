---
title: "Syringe Pump Project"
excerpt: "This project entails the construction of a functional syringe pump powered by a motor coupled to a lead screw." 
header:
  image: /assets/img/syringepumpfront.jpg
  teaser: /assets/img/Cyber-Scooter-TH.jpg
gallery:
  - url: /assets/img/Cyber-Scooter-1.jpg
    image_path: assets/img/Cyber-Scooter-1.jpg
    alt: "placeholder image 1"
  - url: /assets/img/Cyber-Scooter-2.jpg
    image_path: assets/img/Cyber-Scooter-2.jpg
    alt: "placeholder image 2"
  - url: /assets/img/Cyber-Scooter-3.jpg
    image_path: assets/img/Cyber-Scooter-3.jpg
    alt: "placeholder image 3"
---
## Team
Joseph Quatela: Computer Engineering Major, Electrical\
Olivia Omas: Earth and Environmental Science, CAD\
Joseph Zou: Computer Science, Electrical and Code\
Dorothy Chen: Art, CAD

## Introduction 
Syringe pumps can be used in a variety of settings, from delivering medicine and nutrients to patients to delivering small volumes of liquid in research lab settings. In the medical setting, the fluid is delivered very slowly through a mechanism consisting of a motor turning a lead screw which moves the plunger forward and transfers fluid from the syringe to an IV tubing. The motorized and programmable setup enables the supply of fluid to be delivered continuously and consistently. The LCD reading on commercial syringe pumps allows the amount of fluid delivered to be monitored to a high degree of accuracy. Commercial syringe pumps are expensive, with entry-level models costing a couple of hundred to upper-echelon models in the thousands. Designing the individual parts of the syringe pump, 3-D printing them, and programming electronics can be a cost-effective alternative. 
The syringe pump consists of 3-D printed parts designed in Fusion 360. 3-D printing allows for both significantly lower cost and ease of access to make changes in the prototyping phase. The support structures that hold the syringe and the enclosure that holds the electronics were 3-D printed. The stepper motor on the outside is connected to the electronics and is programmable to alter the flow rate.

### Our Design
This project entails the construction of a functional syringe pump powered by a motor coupled to a lead screw. Key design considerations include adaptability to varying syringe diameters and adjustable flow rates. The syringe pump incorporates status lights for operational feedback, a latching button for control, and a limit switch to halt motion when the plunger reaches its limit.
Utilizing CAD modeling and FFF (Fused Filament Fabrication), we aim to create an enclosure to house the electronics, safeguarding them from user access and potential liquid exposure. The syringe components are designed without the use of glue or hammering, instead employing fasteners and non-permanent mechanical fits. We also added our own branding logo to the design to differentiate it from competitors.
To enhance functionality, we added bonus features which include two monetary buttons for motor control in clockwise and counterclockwise directions, as well as an LCD display to provide real-time feedback on flow rate and remaining time until the syringe pump is empty.
The syringe pump went through rigorous testing to verify volumetric flow rates ranging from 0.1 ml/min to 5 ml/min. Furthermore, testing will assess the pump's ability to seamlessly interface with syringes of multiple diameters, ensuring versatility and reliability in operation.


## Description of Features
### Enclosure
The enclosure was made with a curved front that leads to a panel with an LCD display and buttons. The curved surface serves an aesthetic purpose, while the angled panel allows easy access to the buttons and a view of the LCD and LED buttons. The unassuming DimensionalDivasDiscoBall™ logo is placed on the right side to distinguish this syringe pump from the competition.

### Linear Actuator Mechanism
The syringe pump works by placing a syringe into a linear actuator (Figure 1) that pushes or pulls on the plunger to dispense liquid at a constant rate. The linear actuator is an electro-mechanical system that turns rotational motion provided by the motor (Figure 1, label A) into linear motion. The rotational motion of the motor is coupled to a lead screw that a nut may be screwed onto. If this nut is rotationally fixed, as it is by the rod in Figure 1 label B, then the motion is forced to become linear, moving whatever is fixed to the nut back and forth. For this linear actuator, the carriage (label C) is fixed to the screw, so it, as a unit, will move back and forth. On the carriage, there is a slot for the end of the plunger of the syringe pump, which is what allows the carriage to push and pull the plunger. On the end support (label D), there is another slot to hold the body of the syringe in place. The combination of a fixed body with a plunger that is able to be moved by the carriage is what allows the overall system to effectively dispense liquid. For example, if the carriage moves forward, it may push the plunger from 15 mL to 10 mL without the body of the syringe moving at all.
![diagram](/assets/img/sp_diagram.png)

### Buttons, Switch, and LED
The syringe pump is not useful unless it is controllable by the user. For user input, three buttons are located on the front of the enclosure (Figure 7), along with one LED for user feedback. The buttons (from left to right) are the Dispense button, Backward button, and Forward button. The Dispense button is a toggle-able button that tells the pump to move the carriage forward at the correct rate, depending on the desired flow rate and changes the LED to green to show that the pump is currently dispensing. When not pressed, the pump is in a “manual control mode,” where the LED is yellow, and the user may use the forward and backward buttons to move the carriage in the desired direction. Finally, when the pump is done dispensing, a limit switch is present to tell the pump that it is done. When the limit switch is pressed, the LED turns red to signal the end of dispensing, and the motor will no longer turn. These three states can be seen in Figure 7.
![ledgreen](/assets/img/sp_green.jpg)


{% include gallery caption="This is a sample gallery to go along with this case study." %}
