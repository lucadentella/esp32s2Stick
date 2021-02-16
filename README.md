# esp32s2Stick
![](https://github.com/lucadentella/esp32s2Stick/raw/main/images/esp32s2-01.jpg)

![](https://github.com/lucadentella/esp32s2Stick/raw/main/images/esp32s2-02.jpg)
## Description
esp32s2Stick is a USB device based on the **esp32-s2** chip by [Espressif](https://www.espressif.com/en/products/socs/esp32-s2).
Thanks to the presence of an USB OTG interface, it is possible to program the chip to act as a USB peripheral (*mass storage device*, *CDC*...) and to upgrade the firmware through USB (DFU, *Device Firmware Upgrade*).

In addition to the basic circuit needed to run the WROVER module, esp32s2Stick offers an **RGB LED** and a socket for **MicroSD** cards.
## How to make
- Blog post on [my website](http://www.lucadentella.it/en/2021/02/16/esp32s2stick/)
- Eagle files (schematic and board) are available in the "**eagle**" subfolder
- Some test *sketches* for Arduino are available in the "**arduino**" subfolder
- PCB can be ordered [from PCBWay](https://www.pcbway.com/project/shareproject/esp32s2Stick.html)
## Partlist 
 - **C1, C2**: 100nF SMD capacitor (0805)
 - **C3, C4**: 1uF SMD capacitor (0805)
 - **R1, R2, R3, R4, R5, R6**: 10Kohm SMD resistor (0603)
 - **IC1**: 1117-3.3 voltage regulator
 - **D1**: WS2812 RGB led (5050, 4 pins)
 - **BOOT, EN**: SMD momentary switch (5.2mm)
 - **U1**: ESP32-S2-WROVER
 - **J1**: USB A male SMD connector
 - **P1**: MicroSD card socket