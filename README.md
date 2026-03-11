##  Table of Contents

-  [Overview](#overview)
-  [Features](#features)
-  [Hardware Requirements](#hardware-requirements)
-  [Wiring Diagram](#wiring-diagram)
-  [How It Works](#how-it-works)
-  [Usage](#usage)
- [Code Structure](#code-structure)
- [Troubleshooting](#troubleshooting)
- [Summary](#summary)
- [Project Author](#project-author)


## Overview
**I2C EEPROM Interface (Embedded C)**
 

This project demonstrates how to interface an external I²C EEPROM memory device with a microcontroller using Embedded C.

The program initializes the I²C peripheral, writes a byte of data to a specified EEPROM memory address, and then reads the data back from that address.

It provides a simple example of low-level I²C communication including:

- Start and Stop conditions

- Device addressing (Read/Write modes)

- Memory address transmission

- Data write and read operations

- Write cycle delay handling

## Features
- I²C communication initialization

- Single-byte EEPROM write operation

- Single-byte EEPROM read operation

- Memory address handling for EEPROM access

- Implementation of I²C start, stop, and data transfer sequences

- Write-cycle delay to ensure EEPROM data is stored correctly

- Simple modular functions for EEPROM read and write operations

- Suitable as a basic template for embedded I²C memory interfacing
## How it works
The program communicates with an external EEPROM using the I²C protocol. First, the microcontroller initializes the I²C interface to enable communication with the EEPROM device. When writing data, the program sends a start condition, followed by the EEPROM device address in write mode, then transmits the target memory address and the data byte to be stored. After the data is sent, a stop condition is issued and the system waits briefly to allow the EEPROM to complete its internal write cycle.

To read data, the program first performs a dummy write to specify the memory address from which data should be read. It then issues a repeated start condition and sends the EEPROM device address in read mode. The EEPROM responds by transmitting the stored data byte, which the microcontroller reads and stores in a variable before sending a stop condition to end the communication. This sequence allows the program to retrieve the previously stored value from the specified EEPROM address.
