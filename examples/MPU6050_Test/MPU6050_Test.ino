#include <Wire.h>

const int MPU_ADDR = 0x68;

int16_t AcX, AcY, AcZ;
int16_t GyX, GyY, GyZ;

void setup() {
  Serial.begin(115200);

  Wire.begin(21, 22);

  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);

  Serial.println("MPU6050 Ready");
}

void loop() {
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_ADDR, 14, true);

  AcX = Wire.read() << 8 | Wire.read();
  AcY = Wire.read() << 8 | Wire.read();
  AcZ = Wire.read() << 8 | Wire.read();

  GyX = Wire.read() << 8 | Wire.read();
  GyY = Wire.read() << 8 | Wire.read();
  GyZ = Wire.read() << 8 | Wire.read();

  Serial.print("Accel X: ");
  Serial.print(AcX);

  Serial.print(" | Y: ");
  Serial.print(AcY);

  Serial.print(" | Z: ");
  Serial.println(AcZ);

  delay(500);
}
