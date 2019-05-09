#include <Servo.h>
 
// Declaramos la variable para controlar el servo
Servo servoMotor;
int pinLDR = 0;
int valorLDR = 0;  
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(9);
}
 
void loop() {
  valorLDR= analogRead(pinLDR);
  Serial.println(valorLDR);
  if(valorLDR > 79)
  {
  servoMotor.write(0);
  delay(1000);
  }
  if(valorLDR > 110 )
  {
  servoMotor.write(90);
  delay(1000);
  }
  if(valorLDR > 400)
  {
  servoMotor.write(180);
  }
  delay(1000);
}