#include <Servo.h>

Servo jumpServo;

void setup()
{
  Serial.begin(9600);
  jumpServo.attach(9);
  jumpServo.write(20);
}

void loop() 
{

  if (Serial.available() > 0) 
  {

    char command = Serial.read();

    if (command == 'J') 
    {
      jumpServo.write(55);
      delay(180);

      jumpServo.write(20);
      delay(100);
    }
  }
}