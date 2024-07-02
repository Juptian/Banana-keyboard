# banana
* Keyboard Maintainer: [Sebastien Gosselin](https://github.com/Juptian)
* Custom PCB, built on an arduino promicro ATmega32u4
* Hardware Availability: Aliexpress has some go you'll find them for cheap

Make example for this keyboard (after setting up your build environment):

    make banana:default

Flashing example for this keyboard:

    make banana:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 1 way:

* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
