# macrodata_refinement

![macrodata_refinement](https://imgur.com/a/lSjHZ1q)

*A screen accurate recreation of the Macrodata Refinement Terminal HID from Severance. The two mouse keys are represented as keyboard keys in this layout.*

* Keyboard Maintainer: [Nick S](https://github.com/SpencerSoundworks)
* Hardware Supported: STM32F072CBT6
* Hardware Availability: Custom made, not publically available

Make example for this keyboard (after setting up your build environment):

    make macrodata_refinement:default

Flashing example for this keyboard:

    make macrodata_refinement:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
