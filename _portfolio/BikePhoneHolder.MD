---
title: "Bike Phone Holder"
excerpt: "Filament 3-D printed rotating bike phone holder" 
header:
  image: /assets/img/render1.png
  teaser: /assets/img/render2_crop.png

---

## Top down modeling in this assignment

Top down modeling is a CAD method that is useful for creating a product with multiple components that reference each other for dimensions. Additionally, top down modeling allows one to access each component’s sketches and extrusions easily, by clearing the timeline to show only the actions performed on the component when the component is activated in Fusion 360. This assignment uses top down modeling by creating new components that are modeled around a bike handlebar and a phone case. The phone holder was built by visually referencing the dimensions of the phone case. After the holder was built, the detent mechanism component was created on the back face of the holder, allowing me to see how big I could make the part, and more importantly, how the detent mechanism would relate to the phone holder. After that, the clamp sketch was created around the handlebars, and part that connects to the detent mechanism was created by creating sketch planes off faces of the already built clamp component. The assembly consists of five components in total: the phone case (imported), phone holder, detent mechanism, handlebar, and clamp. 

## Rationale for the design

My rationale was to create a primarily functional bike phone holder that minimizes the material and parts needed for a functional product. The phone holder is made of TPU, which can bend slightly, allowing the phone to fit into place, and not fall out while riding the bike. The rest of the product is made of PLA. 

## Rotation mechanism and 3-D printing Technology and Material

The detent mechanism consists of a ball bearing and spring which allows the phone to be rotated and toggle between portrait and landscape orientations. The clamp portion connects to the detent mechanism via 2 m3 bolts. The tightness of the clamp on the handlebars can be adjusted by tightening the nuts of the m3 bolts. The rotation mechanism works well as the ball bearing clicks into place when turning into either portrait or landscape mode. To account for the 3-D printing process, I made the ball bearing hole circle sketch 0.5 mm larger than the 7mm ball bearing diameter, and the spring slot slightly wider than the diameter of the spring. I used filament printing for the whole piece. The phone holder is printed with TPU to allow for flexibility when fitting the phone into the holder, while the rest of the assembly is printed with PLA to ensure that the detent mechanism and clamp onto the handlebars will not move from the force generated when the user rotates the phone.

## Assembly Instructions
Note: The piece comes in two parts: 1. Phone holder, which is already attached to the detent mechanism and 2. The clamp

1. Align the holes of the clamp so that the hole of the clamp which wraps around the handlebars is directly over the cylinder protruding from the detent mechanism.
2. Insert two M3 x 30 mm bolts into the holes, connecting the clamp piece to the detent mechanism body by screwing them in.
3. Slide the whole piece into place on the handlebars via the hole in the clamp. 
4. Insert two M3 x 20 mm into the holes of the clamp, attach nuts to the opposite sides and tighten to secure the whole piece onto the handlebars.
5. Fit the phone into the holder and start riding.

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4faf2711bca6b2fa3?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Figures
![lowerangle](/assets/img/PHon_handlebar.jpg)
Figure 1. Phone holder on handlebars

![gif](/assets/img/PHrotion.gif)
Figure 2. .gif of holder rotating

![rendering1](/assets/img/render1.png)
Figure 3. Fusion 360 Rendering, side view

![rendering2](/assets/img/render2.png)
Figure 4. Fusion 360 Rendering, top view

![rendering2](/assets/img/section analysis detent.png)
Figure 5. Cross section view of rotating mechamism

![lowerangle](/assets/img/holder_render.png)
Figure 6. Holder rendering

![lowerangle](/assets/img/detent_render.png)
Figure 7. Detent rendering

![lowerangle](/assets/img/clamp_render.png)
Figure 8. Clamp rendering

![lowerangle](/assets/img/clamp_onbar_render.png)
Figure 9. Clamp on bar rendering




