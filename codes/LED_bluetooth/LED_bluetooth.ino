/* 
  * Author: AnOnYmOus001100
  * Date: 02/10/2020
  * Description: This program turns LED ON on sending data 1 (1 byte data) and turns OFF LED on sending data 2 (1 byte data) from bluetooth device (smartphone)
*/


void setup() {
  // setting pin 13 as output
  pinMode(13,OUTPUT);
   // starting serial data transfer at 9600 baud rate
  Serial.begin(9600);

}

void loop() {
  // keeps checking if data is received from bluetooth device
  if(Serial.available())
  {
    // reading data from bluetooth and storing in variable v
   int v = Serial.read();
  
    // writing to pin 13 HIGH, when the value of v is 1
    if (v == 1)
     {    
      digitalWrite(13,HIGH); // turns ON the LED
     }
    
  // writng to pin 13 LOW, when the value of v is 2
  if (v == 2)
   {
    digitalWrite(13,LOW); // turns OFF the LED
   }
  
  }
}
