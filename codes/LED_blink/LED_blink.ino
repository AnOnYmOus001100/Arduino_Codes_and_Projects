/*
 * Author: AnOnYmOus001100
 * Date: 02/10/2020
 * Description: Turns LED ON and OFF after a delay of 2secs
 */


void setup() {
  // setting pin 13 as output
  pinMode(13,OUTPUT);

}

void loop() {
  // writing to pin 13 HIGH
  digitalWrite(13,HIGH);  // LED turns ON
  delay(2000);  // delay of 2secs
  // writng to pin 13 LOW
  digitalWrite(13,LOW); // LED turns OFF
  delay(2000);  // delay of 2secs

}
