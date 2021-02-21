# HapticHat

HapticHat is a obstacle avoidance aid that buzzes and vibrates when you're near objects.  It useful for those who are visually impaired, drunk, or especially uncoordinated.

![Hat Diagram](https://raw.githubusercontent.com/TIPConsulting/TrinketM0_HapticHat/main/Diagrams/HatDiagram.jpg)

## Hardware

- 1x Old basball cap
- 1x [Adafruit ItsyBitsy 32u4 5v](https://www.adafruit.com/product/3677)
- Either
  - 1x 500mAh Lipo battery
  - 1x USB battery charger
- 1x [Ultrasonic distance sensor](https://www.sparkfun.com/products/15569)
- 1x [Active tone generator](https://www.sparkfun.com/products/8463)
- 1x [Vibration motor](https://www.sparkfun.com/products/11008)
- Misc wires or conductive thread

## Design

This is a fairly simple sensory augmentation device converts what are usually visual signals to touch and sound.  The buzzer noises increase in frequency as you get closer to obstacles around you, and the vibrator engages if you are less than a foot away.  Wearers will be able to feel their proximity to the world around them and avoid crashing into it.  There is a beeper that indicates proximity to bearby objects - getting closer will increase the indicator frequency.  If get too close, the vibration motor will turn on and give you gentle reminder to avoid that wall.

## Applications

The primary application is for blind users to help navigate unfamiliar places.  This hat is most suited for people, but it would be possible to adapt it for animals as well so they can enjoy greater freedom and mobility.  It can also be used by drunkards stumbling back home, very tall people trying to avoid doorways, and anyone looking to add a bit of excitement to their rainy-day hikes.


## Build Process
0- Make sure you have all the proper parts.  The only major precaution is that you need 5v power to drive the ultrasonic range finder. For best results following this guide, make sure you have a 5v controller and 5v power supply. If you really want to use 3v instead, there is a [compatible distance sensor](https://www.adafruit.com/product/4007) that can run on either 3v or 5v.

1 -  Use your components and along with the above wiring guide to assemble a prototype.  Im using a breadboard for this step, but you can use whatever you like.

<img src="https://raw.githubusercontent.com/TIPConsulting/32u4_HapticHat/main/Diagrams/PrototypeAssembly.jpg" alt="Prototype" width="400px">
  
2 - Upload the code from the repository onto the board and make sure it works.  Point the distance sensor at various objects around you.  The beeper frequncy should change based on the distance and the vibrator will turn on when you get close.  If those features don't work, then revisit the diagram and make sure you uploaded the code properly.  You may also need to double check your power source.

3 - Now that we know it all works, its time to moint!
