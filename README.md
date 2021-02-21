# Haptic Hat

HapticHat is an obstacle avoidance aid that buzzes and vibrates when you're near objects.  It useful for those who are visually impaired, drunk, or especially uncoordinated.

![Hat Diagram](https://raw.githubusercontent.com/TIPConsulting/TrinketM0_HapticHat/main/Diagrams/HatDiagram.jpg)

## Hardware

- 1x Old basball cap
- 1x [Adafruit ItsyBitsy 32u4 5v](https://www.adafruit.com/product/3677)
- 1x 5v Power supply
- 1x [Ultrasonic distance sensor](https://www.sparkfun.com/products/15569)
- 1x [Active tone generator](https://www.sparkfun.com/products/8463)
- 1x [Vibration motor](https://www.sparkfun.com/products/11008)
- Misc jumper wires
- Conductive thread

## Design

This is a fairly simple sensory augmentation device converts what are usually visual signals to touch and sound.  The buzzer noises increase in frequency as you get closer to obstacles around you, and the vibrator engages if you are less than a foot away.  Wearers will be able to feel their proximity to the world around them and avoid crashing into it.  There is a beeper that indicates proximity to bearby objects - getting closer will increase the indicator frequency.  If get too close, the vibration motor will turn on and give you gentle reminder to avoid that wall.

## Applications

The primary application is for blind users to help navigate unfamiliar places.  This hat is most suited for people, but it would be possible to adapt it for animals as well so they can enjoy greater freedom and mobility.  It can also be used by drunkards stumbling back home, very tall people trying to avoid doorways, and anyone looking to add a bit of excitement to their rainy-day hikes.


## Build Process
0 - Make sure you have all the proper parts.  The only major precaution is that you need 5v power to drive the ultrasonic range finder. For best results following this guide, make sure you have a 5v controller and 5v power supply. If you really want to use 3v instead, there is a [compatible distance sensor](https://www.adafruit.com/product/4007) that can run on either 3v or 5v.

1 -  Use your components and along with the above wiring guide to assemble a prototype.  Im using a breadboard for this step, but you can use whatever you like.

<img src="https://raw.githubusercontent.com/TIPConsulting/32u4_HapticHat/main/Diagrams/PrototypeAssembly.jpg" alt="Prototype" width="400px">
  
2 - Upload the code from the repository onto the board and make sure it works.  Point the distance sensor at various objects around you.  The beeper frequncy should change based on the distance and the vibrator will turn on when you get close.  If those features don't work, then revisit the diagram and make sure you uploaded the code properly.  You may also need to double check your power source.

3 - Now that we know all the parts work, it's time to build!

3.A - First, we need power distribution points.  These will serve 2 purposes: first, they allow us to branch out from a single pin and send power multiple places; second, we need a way to connect conventional PTH components to wearable components.  I have chosen to solder wires to clothing snaps.  They're easy to solder and easy to stich, which makes them perfect for our plans.

<img src="https://raw.githubusercontent.com/TIPConsulting/32u4_HapticHat/main/Diagrams/PowerDistroSingle.JPG" alt="Prototype" width="400px">

We will need 3 total

<img src="https://raw.githubusercontent.com/TIPConsulting/32u4_HapticHat/main/Diagrams/PowerDistroGroup.JPG" alt="Prototype" width="400px">

3.B - At this point, we should rig our distance sensor and controller to a hat.  There are many ways to do this, the important part is getting your sensor to point forward and ensuring that all your pins are accessible.  We used a block of cardboard to build a frame.  The distance sensor goes on front and the controller goes on top.  The sound sensor can be glued or sewed onto the side of the frame as well.  All the pins are facing up so we can jumper them together.

<img src="https://raw.githubusercontent.com/TIPConsulting/32u4_HapticHat/main/Diagrams/HatProgress1.JPG" alt="Prototype" width="400px">

3.C - Connect our power distrbution snaps from earlier to their proper pins. Red.3 on 5v, Gray.3 on Ground, and Red.1 on Pin 1.  Now follow the diagram to connect the auxilliary components to power.

3.D - Now that everything has power, we need to add the vibration motor.  This is wear the soft circuits come into play since we're using a wearable vibration motor.  We need to connect the vibrator negative to ground and vibrator positive to pin 1.  Use conductive thread to stich the power distribution points to hat and to the vibrator.  When you're done, you should have something that looks about like this

<img src="https://raw.githubusercontent.com/TIPConsulting/32u4_HapticHat/main/Diagrams/HatDone3.JPG" alt="Prototype" width="400px">

3.E - As a final step, make sure all the power points are secured and any loose thread is trimmed - we don't want our fancy hat to catch fire!

<img src="https://raw.githubusercontent.com/TIPConsulting/32u4_HapticHat/main/Diagrams/HatDone1.JPG" alt="Prototype" width="400px"> <img src="https://raw.githubusercontent.com/TIPConsulting/32u4_HapticHat/main/Diagrams/HatDone2.JPG" alt="Prototype" width="400px">

4 - Enjoy your new hat! [Here's a demo](https://github.com/TIPConsulting/32u4_HapticHat/discussions/1)
