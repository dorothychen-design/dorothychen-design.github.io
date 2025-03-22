---
title: "Microfluidic Device"
excerpt: "Creating a microfluidic device that sorts particles using pinch flow fractionation" 
header:
  image: /assets/img/3-D printed insidejpg.jpg
  teaser: /assets/img/3-D printed insidejpg.jpg
---
## Introduction 
Microfluidic devices are systems that are used to work with small amounts of fluid. They can be used in medical settings, lab settings to transport, sort, or mix fluid.

In this project, the microfluidic device uses pinch flow fractionation to separate particles. Designed in CAD and printed a cast resin for a PDMS mold, the device was able to separate the two particles at a somewhat consistent level. Pinch flow fractionation is a specific mechanism that can be created in a microfluidic device that is used for separating particles of different sizes. Two inlets supply fluid: one inlet containing fluid with particles and one without, which contains a higher flow rate. They converge at a point, and travel through a smaller “pinched” section into a wider “broad” section. In the pinched section, the particles are slammed to a side wall by the liquid with no particles. The result is separating the particles where the smaller particle will exit into a different outlet than the large particle.


### Process
### CAD model
A 3D model was created in Autodesk Fusion 360. The model’s features define the empty space of the final microfluidic device. 

#### Print and cure mold 
The model is then printed with the Formlabs Form 3+ resin printer. The printer uses SLA technology to cure photosensitive resin layer by layer with a UV laser.

#### Parylene device 
The resin mold is coated with parylene to increase resolution around contour edges. The coat makes it easier to demold the PDMS.

#### Cast PDMS
PDMS solution is poured into the mold. 

#### Plasma bond glass slide
Plasma bonding is used to create a strong, permanent bond between PDMS and the glass. The plasma activates both surfaces and covalent bonds are created when they join together.


## Description of Features
### Enclosure
The enclosure was made with a curved front that leads to a panel with an LCD display and buttons. The curved surface serves an aesthetic purpose, while the angled panel allows easy access to the buttons and a view of the LCD and LED buttons. The unassuming DimensionalDivasDiscoBall™ logo is placed on the right side to distinguish this syringe pump from the competition.

### Linear Actuator Mechanism
The syringe pump works by placing a syringe into a linear actuator (Figure 1) that pushes or pulls on the plunger to dispense liquid at a constant rate. The linear actuator is an electro-mechanical system that turns rotational motion provided by the motor (Figure 1, label A) into linear motion. The rotational motion of the motor is coupled to a lead screw that a nut may be screwed onto. If this nut is rotationally fixed, as it is by the rod in Figure 1 label B, then the motion is forced to become linear, moving whatever is fixed to the nut back and forth. For this linear actuator, the carriage (label C) is fixed to the screw, so it, as a unit, will move back and forth. On the carriage, there is a slot for the end of the plunger of the syringe pump, which is what allows the carriage to push and pull the plunger. On the end support (label D), there is another slot to hold the body of the syringe in place. The combination of a fixed body with a plunger that is able to be moved by the carriage is what allows the overall system to effectively dispense liquid. For example, if the carriage moves forward, it may push the plunger from 15 mL to 10 mL without the body of the syringe moving at all.

![diagram](/assets/img/sp_diagram.png)\
Figure 1
