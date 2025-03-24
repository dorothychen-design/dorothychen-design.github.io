---
title: "Microfluidic Device"
excerpt: "Creating a microfluidic device that sorts particles using pinch flow fractionation" 
header:
  image: /assets/img/microfluidic-resin.jpg
  teaser: /assets/img/microfluidic-resin.jpg
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

![microfluidicdevice](/assets/img/microfluidic-resin.jpg)
Resin printed model

![PDMScast](/assets/img/microfluidic-pdms.jpg)
PDMS device

## Description of Features
### Coating with Parylene?
Resin-printed molds are coated with parylene prior to casting the PDMS to ensure high fidelity in contour edges. This allows the final device to have high dimensional accuracy. The coated parylene also enables full cross-linking of PDMS. Without the parylene coat, the minimal contouring of nonplanar features resulted in residual PDMS which had not fully cross-linked. This situation also makes the PDMS hard to demold. 

### Applications
Applications of this microfluidic sorter include sorting any particles of different sizes.


## Design and Dimensions

This geometry is conducive to sorting because it aims to have an equal surface area across all 3 channels in order to have an as close to equal flow rate as possible. The equation:

Y0 = (wp − D/2 ) * (wb / wp), where

Y0 = particle position at outlet
wp = width of pinch
wb = width of broad
D = diameter of particle

is used to calculate where the particle will end up after going out of the pinch section.

### Dimensions

For this experiment:
particle 1: 0.125 - 0.15 mm
particle 2: 0.425 - 0.5 mm

Width of pinch = 0.75 mm
Width of board = 0.19 mm
Small particle size = 0.15 mm
Large particle size = 0.5 mm 
Small particle position at outlet = 17.10 mm from x = 0
Large particle position at outlet = 12.67 mm from x = 0

## CAD model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4ce364c9d70b89280?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Watch
[Watch the device testing](https://youtu.be/fqPoehCZjDY)

### Steps to Ensure Proper Flow Rate

The smaller particle outlet is closer to the pinch section than the large particle outlet. As a result, fluid will flow into the smaller particle outlet channel faster than the larger. This can result in different flow rates, which then altesr the particle’s exit positions and result in failed sorting. I used a zig-zag channel design for the smaller particle outlet to increase the cross-sectional area (creating a longer path for the particle to travel). This should even out the flow rate, preventing disruption to the laminar flow streamlines. 

### Results
The particles did separate but inconsistently. The way the particles moved suggests that laminar flow was not present. For the future, COMSOL, a fluid simulation software can be used to ensure that the flow rates of the fluid going out of the channels are equal.

*no bonus attempted


