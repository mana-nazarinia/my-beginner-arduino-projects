# sum1
This arduino sketch calculates the sum of two integers and prints the result to the serial monitor.
## Description
The program initializes two integer variables 'a' and 'b', cumputes their sum and displays:
on the serial monitor at a baud rate of **9600**.

## Code Overview
- Uses `Serial.begin(9600)` for communication.
- Declares integers:
```cpp
 int a = 10;
  int b = 5;
  int sum = a + b;
  
#How to run
Open the sketch in Arduino IDE.
Select the correct board and port.
Upload the code.
Open Tools → Serial Monitor and set baud rate to 9600 to see the output.
Sample output:
the sum of 10 + 5 = 15
