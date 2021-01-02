# WiFi

> The Portenta H7 features a Murata 1DX, which is a high performance chipset which supports WiFi 802.11b/g/n + Bluetooth 5.1 BR/EDR/LE up to 65Mbps PHY data rate on WiFi and 3Mbps PHY data rate on Bluetooth. This module helps to configure the Portenta into three different modes of operation - an Access Point, a Station, or both. - [Portenta H7 as a WiFi Access Point](https://www.arduino.cc/pro/tutorials/portenta-h7/por-ard-ap)

You can find examples on how to use WiFi on the [WiFi library documentation page](https://www.arduino.cc/en/Reference/WiFi), and there is also a [guide on how to set up a WiFi Access Point](https://www.arduino.cc/pro/tutorials/portenta-h7/por-ard-ap) specifically for the Portenta H7.

**Note**: If you're are getting the following error:
```
Important Error: 
Access Point Web Server
Creating access point named: PortentaAccessPoint
Failed to mount the filesystem containing the WiFi firmware.
Usually that means that the WiFi firmware has not been installed yet or was overwritten with another firmware.
Please run the "PortentaWiFiFirmwareUpdater" sketch once to install the WiFi firmware.
``` 

go to File -> Examples -> WiFi -> PortentaWiFiFirmwareUpdater and upload the script to the Portenta. After uploading, you should see the following output inside the serial console.

```
...
-----END CERTIFICATE-----

Firmware and certificates updated!
```

## Resources

* [Arduino WiFi library](https://www.arduino.cc/en/Reference/WiFi)
* [Portenta H7 as a WiFi Access Point](https://www.arduino.cc/pro/tutorials/portenta-h7/por-ard-ap)