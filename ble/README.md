# BLE - Bluetooth Low Energy

![](https://www.global-tag.com/wp-content/uploads/2018/12/BLE_Header.png)

## Quick Introduction to BLE

Bluetooth Low Energy is a version of Bluetooth wireless technology, specially optimized for low power use at low data rates. 

Unlike standard Bluetooth communication, which is based on an asynchronous serial connection (UART), a Bluetooth LE radio acts like a community bulletin board.

For more information, check out the following resources:
* [Bluetooth Low Energy Wikipedia](https://en.wikipedia.org/wiki/Bluetooth_Low_Energy)
* [Bluetooth Low Energy Arduino Documentation](https://www.arduino.cc/en/Reference/ArduinoBLE)


## Code Example

Bluetooth central or peripheral devices can be created with the [ArduinoBLE library](https://www.arduino.cc/en/Reference/ArduinoBLE). The ArduinoBLE library has multiple examples. For simplicity, I choose to work through the LED example.

The LED example has two scripts - a central script and a peripheral script. The peripheral script creates a BLE Service that turns on the built-in LED if the send value isn't 0.

Peripheral/LED.ino
```c
#include <ArduinoBLE.h>

BLEService ledService("19B10000-E8F2-537E-4F6C-D104768A1214"); // BLE LED Service

// BLE LED Switch Characteristic - custom 128-bit UUID, read and writable by central
BLEByteCharacteristic switchCharacteristic("19B10001-E8F2-537E-4F6C-D104768A1214", BLERead | BLEWrite);

const int ledPin = LED_BUILTIN; // pin to use for the LED

void setup() {
  Serial.begin(9600);
  while (!Serial);

  // set LED pin to output mode
  pinMode(ledPin, OUTPUT);

  // begin initialization
  if (!BLE.begin()) {
    Serial.println("starting BLE failed!");

    while (1);
  }

  // set advertised local name and service UUID:
  BLE.setLocalName("LED");
  BLE.setAdvertisedService(ledService);

  // add the characteristic to the service
  ledService.addCharacteristic(switchCharacteristic);

  // add service
  BLE.addService(ledService);

  // set the initial value for the characeristic:
  switchCharacteristic.writeValue(0);

  // start advertising
  BLE.advertise();

  Serial.println("BLE LED Peripheral");
}

void loop() {
  // listen for BLE peripherals to connect:
  BLEDevice central = BLE.central();

  // if a central is connected to peripheral:
  if (central) {
    Serial.print("Connected to central: ");
    // print the central's MAC address:
    Serial.println(central.address());

    // while the central is still connected to peripheral:
    while (central.connected()) {
      // if the remote device wrote to the characteristic,
      // use the value to control the LED:
      if (switchCharacteristic.written()) {
        if (switchCharacteristic.value()) {   // any value other than 0
          Serial.println("LED on");
          digitalWrite(ledPin, HIGH);         // will turn the LED on
        } else {                              // a 0 value
          Serial.println(F("LED off"));
          digitalWrite(ledPin, LOW);          // will turn the LED off
        }
      }
    }

    // when the central disconnects, print it out:
    Serial.print(F("Disconnected from central: "));
    Serial.println(central.address());
  }
}
```

Now the LED can be controlled by connecting to the service. This can be done with the Central/LedControl.ino script or through a smartphone app like [nRF Connect](https://play.google.com/store/apps/details?id=no.nordicsemi.android.mcp&hl=en) or [LightBlue](https://play.google.com/store/apps/details?id=com.punchthrough.lightblueexplorer&hl=en).