# LED Sequence Switch (Arduino)

## Project Description
This project demonstrates how to control multiple LEDs in a sequence using an Arduino.
Only one LED turns ON at a time, and the active LED changes sequentially.

The program uses a `for` loop combined with a `switch-case` structure to control the LEDs.

---

## Hardware Requirements
- Arduino Uno (or compatible board)
- 4 x LEDs
- 4 x 220Ω resistors
- Breadboard
- Jumper wires

---

## Pin Configuration
| Arduino Pin | Component |
|------------|----------|
| 2 | LED 1 |
| 3 | LED 2 |
| 4 | LED 3 |
| 5 | LED 4 |

Each LED is connected in series with a resistor.
All LED cathodes (–) are connected to GND.

---

## Code Explanation

### setup()
Pins 2 to 5 are configured as output pins using a `for` loop:
```cpp
for (int i = 2; i <= 5; i++) {
pinMode(i, OUTPUT);
}

loop()
A for loop iterates through pin numbers 2 to 5
In each iteration, a switch-case statement:
Turns ON one LED
Turns OFF all other LEDs
A short delay (delay(100)) creates visible LED switching
Learning Objectives
This project helps beginners understand:

for loops in Arduino
switch-case control structure
Digital output control
Sequential LED patterns
