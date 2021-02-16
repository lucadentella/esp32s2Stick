# esp32s2Stick
## Description
esp32s2Stick is a USB device based on the **esp32-s2** chip by [Espressif](https://www.espressif.com/en/products/socs/esp32-s2).
Thanks to the presence of an USB OTG interface, it is possible to program the chip to act as a USB peripheral (*mass storage device*, *CDC*...) and to upgrade the firmware through USB (DFU, *Device Firmware Upgrade*).

In addition to the basic circuit needed to run the WROVER module, esp32s2Stick offers an **RGB LED** and a socket for **MicroSD** cards.
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