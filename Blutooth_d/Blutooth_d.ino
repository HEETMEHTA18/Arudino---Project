#include "BluetoothSerial.h"

// Initialize BluetoothSerial object
BluetoothSerial SerialBT;

void setup() {
    // Start Serial Monitor
    Serial.begin(115200);

    // Initialize Bluetooth as Slave (not master)
    if (!SerialBT.begin("ESP32_Test")) { // "ESP32_Test" is the name of the ESP32 Bluetooth
        Serial.println("Failed to initialize Bluetooth");
        while (1); // Stop execution if Bluetooth initialization fails
    }
    Serial.println("Bluetooth initialized as Slave");

    // Wait for a connection
    while (!SerialBT.connected()) {
        Serial.println("Waiting for a connection...");
        delay(1000); // Delay while waiting for connection
    }

    // Once connected, print connection details
    Serial.println("Connected to a device!");
}

void loop() {
    // Check if the device is still connected
    if (SerialBT.connected()) {
        for (int i = 0; i < 1000; i++) {
            SerialBT.println("Request " + String(i + 1)); // Send a request
            delay(10); // Small delay to prevent overloading the ESP32
        }
        Serial.println("1000 requests sent.");
    } else {
        Serial.println("Not connected to the target device");
    }

    delay(1000); // Wait before repeating or stopping
}
