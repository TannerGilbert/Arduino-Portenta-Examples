# Arduino Portenta Examples

![Arduino Portenta H7](https://store-cdn.arduino.cc/uni/catalog/product/cache/1/image/520x330/604a3538c15e081937dbfbd20aa60aad/a/b/abx00042_featured_3.jpg)

The Arduino Portenta H7 is Arduinos newest microcontroller. The H7's main processor is the dual core STM32H747 including a Cortex M7 running at 480 MHz and a Cortex M4 running at 240 MHz. The two cores can communicate with each other over a Remote Procedure Call mechanism that allows calling functions on the other processor.

Both processors share all the in-chip peripherals and can run:

- Arduino sketches on top of the Arm® Mbed™ OS
- Native Mbed™ applications
- MicroPython / JavaScript via an interpreter
- TensorFlow™ Lite

The Portenta H7 also includes an on-chip GPU that allows you to connect an external monitor to build your own dedicated embedded computer with a user interface. The Portenta also has two 80 pin high density connectors at the bottom of the board that allows you to attach extentsion boards like the [Vision Shield](https://store.arduino.cc/portenta-vision-shield). Furthermore the Portenta H7 also features a Murata 1DX, which is a high performance chipset which supports WiFi 802.11b/g/n + Bluetooth 5.1 BR/EDR/LE up to 65Mbps PHY data rate on WiFi and 3Mbps PHY data rate on Bluetooth.

## Hardware Overview

<table>
    <tbody>
        <tr>
            <td>Microcontroller</td>
            <td>STM32H747XI dual Cortex®-M7+M4 32bit low power Arm® MCU <a href="https://content.arduino.cc/assets/Arduino-Portenta-H7_Datasheet_stm32h747xi.pdf" target="_blank">(datasheet)</a></td>
        </tr>
        <tr>
            <td>Radio module</td>
            <td>Murata 1DX dual WiFi 802.11b/g/n 65 Mbps and Bluetooth 5.1 BR/EDR/LE (<a href="https://content.arduino.cc/assets/Arduino-Portenta-H7_Datasheet_Murata-1dx.pdf" target="_blank">datasheet</a>)</td>
        </tr>
        <tr>
            <td>Secure Element (default)</td>
            <td>NXP SE0502 (<a href="https://content.arduino.cc/assets/Arduino-Portenta-H7_Datasheet_NXP-SE050.pdf" target="_blank">datasheet</a>)</td>
        </tr>
        <tr>
            <td>Board Power Supply (USB/VIN)</td>
            <td>5V</td>
        </tr>
        <tr>
            <td>Supported Battery</td>
            <td>Li-Po Single Cell, 3.7V, 700mAh Minimum (integrated charger)</td>
        </tr>
        <tr>
            <td>Circuit Operating Voltage</td>
            <td>3.3V</td>
        </tr>
        <tr>
            <td>Current Consumption</td>
            <td>2.95 μA in Standby mode (Backup SRAM OFF, RTC/LSE ON)</td>
        </tr>
        <tr>
            <td>Display Connector</td>
            <td>MIPI DSI host &amp; MIPI D-PHY to interface with low-pin count large display</td>
        </tr>
        <tr>
            <td>GPU</td>
            <td>Chrom-ART graphical hardware Accelerator™</td>
        </tr>
        <tr>
            <td>Timers</td>
            <td>22x timers and watchdogs</td>
        </tr>
        <tr>
            <td>UART</td>
            <td>4x ports (2 with flow control)</td>
        </tr>
        <tr>
            <td>Ethernet PHY</td>
            <td>10 / 100 Mbps (through expansion port only)</td>
        </tr>
        <tr>
            <td>SD Card</td>
            <td>Interface for SD Card connector (through expansion port only)</td>
        </tr>
        <tr>
            <td>Operational Temperature</td>
            <td>-40 °C to +85 °C</td>
        </tr>
        <tr>
            <td>MKR Headers</td>
            <td>Use any of the existing industrial MKR shields on it</td>
        </tr>
        <tr>
            <td>High-density Connectors</td>
            <td>Two 80 pin connectors will expose all of the board's peripherals to other devices</td>
        </tr>
        <tr>
            <td>Camera Interface</td>
            <td>8-bit, up to 80 MHz</td>
        </tr>
        <tr>
            <td>ADC</td>
            <td>3× ADCs with 16-bit max. resolution (up to 36 channels, up to 3.6 MSPS)</td>
        </tr>
        <tr>
            <td>DAC</td>
            <td>2× 12-bit DAC (1 MHz)</td>
        </tr>
        <tr>
            <td>USB-C</td>
            <td>Host / Device, DisplayPort out, High / Full Speed, Power delivery</td>
        </tr>
    </tbody>
</table>

Source: https://store.arduino.cc/portenta-h7

## Getting started 

When getting started with your new Portenta H7 I'd highly recommend checking out the ["Get to know Portenta H7" page](https://www.arduino.cc/pro/tutorials/portenta-h7). 

## Resources

- [PORTENTA H7](https://store.arduino.cc/portenta-h7)
- [ARDUINO PORTENTA VISION SHIELD](https://store.arduino.cc/portenta-vision-shield)
- [Get to know Portenta H7](https://www.arduino.cc/pro/tutorials/portenta-h7)
- [my-examples-for-the-arduino-portentaH7](https://github.com/hpssjellis/my-examples-for-the-arduino-portentaH7)
