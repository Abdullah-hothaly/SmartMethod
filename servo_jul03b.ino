#include <Servo.h>           //Servo library
 
Servo servo1;        //initialize a servo object for the connected servo  
 Servo servo2;
 Servo servo3;
 Servo servo4;
 Servo servo5;           
int angle = 90;    
 
void setup() 
{ 
  servo1.attach(8); // attach the signal pin of servo to pins of arduino
servo2.attach(9);
servo3.attach(10);
servo4.attach(11);
servo5.attach(12);
} 
  
void loop() 
{ 
  for(angle = 90; angle < 180; angle += 1)    // command to move from 90 degrees to 180 degrees 
  {                                  
    servo1.write(angle);                 //command to rotate the servo to the specified angle
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    servo5.write(angle);
    delay(15);                       
  } 
 
  delay(1000);
  
  for(angle = 180; angle>=90; angle-=5)     // command to move from 180 degrees to 90 degrees 
  {                                
    servo1.write(angle);              //command to rotate the servo to the specified angle
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    servo5.write(angle);
    
    delay(5);                       
  } 

  delay(1000); 
}
