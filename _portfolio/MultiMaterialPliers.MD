---
title: "Multi-material Plier"
excerpt: "3-D printed functional plier using TPU and PLA" 
header:
  image: /assets/img/pliersfront1.jpg
  teaser: /assets/img/pliersflexible1.jpg

gallery:
  - url: /assets/img/pliersfront.jpg
    image_path: /assets/img/pliersfront.jpg
    alt: "frontface"
---

## Description
This project consisted of using two materials to create a flexible plier. Although I did not use a print-in-place method, I created the two components (flexible region and hard region) separately and joined them by hand with a press fit. Print-in-place parts increase efficiency in the printing process as it eliminates the need for a manual or automated assembly step. A combination of materials such as TPU + PLA work well for a part that needs to have flexibility in one area and rigidity in another. The pliers used this combination of materials with TPU used for the flexible section and PLA used for the jaws and handles. 

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a48658a79429332436?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Design
The design intends for a flexible region that moves and brings the tips of the jaws together when the handles are brought together. The terrace structure of the flexible component was created in SuperSlicer. I removed the top and bottom layers from the model, revealing the infill pattern underneath. The flexible component went through multiple iterations. In the first iteration with the flexible and rigid rejoins joined, my part was too flexible. The flexible region would twist when the handlebars were closed. The infill lines were too thin, resulting in too much flexibility and low consistency in printing the lines. I increased the extrusion width and flow to 1 mm and increased the depth in both regions to 10mm from 5 mm. The 2nd iteration of the print (the final product) with these changes implemented resulted in a firmer plier and the right amount of flexibility. 

![fleible](/assets/img/pliersflexible1.jpg)\
![gif](/assets/img/pliersgif2.gif)

### Specifications
Jaw length: 54.6 mm\
Jaw capacity: 14mm

### Print settings
The print settings altered are:\ 
Perimeters and Shell > Vertical Shells > Perimeters to 3\
Infill > 25%, Rectilinear\
Width and Flow > Extrusion width > Infill changed to 1 mm 

![gif1](/assets/img/pliersgif.gif)
![finalinteration](/assets/img/pliersfront.jpg)

