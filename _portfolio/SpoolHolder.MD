---
title: "Generative Design Filament Spool Holder"
excerpt: "Spool holder for Vanderbilt Digital Fabrication Lab Voron 3-D Printer" 
header:
  image: /assets/img/spoolsideview.jpg
  teaser: /assets/img/spoolfrontview.jpg

---
## Overview of the part and application

I designed a spool holder that was designed to add ease to the process of filament printing. The holder allows the user to see the spool and filament, by designing a holder that relocates its position to above the filament printer instead of behind it. This allows students in the Digital Fabrication lab to easily reach the spool for loading/unloading and allows them to see when the filament is running low. This use case was relevant as it serves to enhance the experience of all students who will use the filament printer in the lab, and is meaningful as it can eliminate a pain point for students and decrease the chance of prints failing due to running out of filament. 

## Preserve and Obstacle Geometry

The preserve geometry regions include the component that attaches to the aluminum extrusion on the printer, the hole to hold the bowden tube for loading filament, and the component that the spool itself rests on.

For obstacle geometries, I defined them for the spool region, the hole for the M5 bolt and tool to screw it in, the hole for the bowden tube, the hole through the spool holder, and the top of the Voron printer. For the spool, I created a cylinder shape that encloses the spool holder preserve geometry. The diameter of the cylinder is the diameter of the largest spool in the DF lab. Initially, I had modeled the spool around the preserve with the centers of both circles lining up. This resulted in the spool holder being too low, because I did not account for the fact that the spool would be resting on the holder, meaning it would sit lower. I created obstacle geometries for the M5 bolt as well as for the head of the bolt. I extended the geometry up to ensure there is room for an allen key to screw the bolt down. I created another cylinder obstacle geometry for sliding in a bowden tube through the spool holder to decrease the friction of the spool against the holder, and a cylinder going through the bowden tube holder where the filament would be loaded in.

## Load case application and structural constraints

### Forces:
1. Gravity
2. Load case 1: Static load: bearing load of 50N down (angle of 180 degrees), bearing load of 5N (125 degrees) \
I accounted for a max weight of the spool being 3 kg pounds, as well as additional pressure a user might exert downwards when loading the spool. To calculate the force: F = 3 kg × 9.8 m/s = 29.4 N. I added an additional 20 N to account for miscellaneous forces exerted by a user.
3. Load case 2: Shear force: 120 N down, 120 N from the side (90 degrees) \
These forces are applied to one side of the holder. I accounted for extra force in this area.
4. Load case 3: Slam force: 120 N on side face of spool holder (90 degrees) \
Forces here account for the slamming of the spool onto the holder.

### Constraints:
One fixed constraint on the printer clamp preserve geometry. This is the only part that won’t move.

## Critiques of Generative Design

In terms of practical engineering, generative design is useful because it provides the designer with simultaneous paths of exploration, usually producing a variety of outcomes for each generative study. Often, more organic shapes are created for the generative design. This makes additive manufacturing an appropriate printing method for generative designed parts. Structural loads and constraints can be applied in a generative study, ensuring that the final part is functional. Generative is useful for prototyping because it is easy to make a quick change and produce a new set of possible solutions. The limitations I encountered were not a result from using generative design, but from Fusion not being able to generate the model when I wanted to. Otherwise, I did not encounter any limitations of generative design. 

Generative design can be useful in building frames such as those for motorcycles, and bicycles. Applications of generative design include consumer goods that can benefit from a more efficient, structurally sound, and a more custom shaped look. The automotive manufacturing, aerospace, and sports equipment industries can all benefit from generative design. In these three fields, engineers can use generative design to reduce weight, improve weak design areas, and increase strength and stability to parts. 

Generative design falls short for projects where the designer doesn’t have a clear goal or understanding of the part they are trying to make. GD requires well-defined preserve and obstacle regions, and requires the designer to have a thorough understanding of the design, the placement of certain parts (which are fixed and which should be generated), and the physical application context of the part, knowing the constraints well to make space for the generative design opportunities.

## CAD Model:

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a40b5615b415f04d8f?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


## Table of forces applied

| Name of force | Magnitude | Location applied | Rational |
|-----------|------------| ---------------- | ---------- |
| Bearing load  | 50N downwards | center of the holder preserve geometry | I assigned the force considering a 3kg spool with filament, which calculates to 30N. An additional 20 was added to increase stability |
| Bearing load | 5N at 125 degrees | side of holder preserve | force of extrusion pull |
| Shear force | 120 N downwards | one side of the holder preserve | force from possible jostling of spool against holder while loading |
| Shear force | 120 N at 90 degrees | one side of the holder preserve | jostling of spool against holder while loading |
| Slamming force | 120N at 90 degrees | the side face of the holder preserve | accounting for possible slamming of spool on holder while loading |

## Media

## Generative Design Outcome Iterations

![Iteration1](/assets/img/Iteration1.png)
Iteration 1.

![Iteration2](assets/img/Iteration2.png)
Iteration 2.

![Iteration3](assets/img/Iteration3.png)
Iteration 3.

![Iteration4](assets/img/Iteration4.png)
Iteration 4

![Iteration5](assets/img/Iteration5.png)
Iteration 5

## Before
![Before1](/assets/img/spoolbefore1.jpg)
Spool behind the printer is harder to reach.

![Before2](/assets/img/spoolbefore2.jpg)
Top view.

## After
![After](/assets/img/spoolsideview.jpg)




