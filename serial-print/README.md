# serial-print-if-demo

This Arduino sketch demonstrates how to print both text and variable data on the Serial Monitor, and how to use an `if` statement to check whether a number is even or odd.

---

## Description
The program initializes a string variable and an integer number. It prints the city name and then determines whether the number is even or odd, displaying the result on the Serial Monitor.

**Baud Rate:** 115200

---

## Code Overview
- Uses `Serial.begin(115200)` for fast serial communication.
- Demonstrates printing text and variables using `Serial.print()` and `Serial.println()`.
- Applies an `if` statement to check:
```cpp
  if (num % 2 == 0)
Serial.println("Even");
  else
Serial.println("Odd");
  
void setup() {
  Serial.begin(115200);
  char city[] = "Shiraz";

  Serial.print("City: ");
  Serial.println(city);

  int num = 4;

  if (num % 2 == 0)
Serial.println("Even");
  else
Serial.println("Odd");
}
void loop() {
  // No repeating c
