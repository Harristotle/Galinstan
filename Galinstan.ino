/*
Galinstan

*/
int period = 2000; //milliseconds
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(7, OUTPUT); // it is close to the cell!
  pinMode(6, OUTPUT); // it is close to the cell!
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(period);              // wait for a second
  digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  delay(period);              // wait for a second
}
