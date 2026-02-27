#include <Arduino.h>
#include <SimpleMath.h>

SimpleMath math;

void setup() {
  Serial.begin(115200);

  int result1 = math.add(10, 5);
  int result2 = math.subtract(10, 5);

  Serial.print("Addition: ");
  Serial.println(result1);

  Serial.print("Subtraction: ");
  Serial.println(result2);
}

void loop() {
}
