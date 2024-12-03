const int ledpin=19;
void setup() {
 pinMode(ledpin,OUTPUT);

}

void loop() {
  digitalWrite(ledpin,HIGH);// TURN THE LED ON HIGH VOLTAGE LEVEL
  delay(2000);//WAIT FOR A SECOND
  digitalWrite(ledpin,LOW);//// TURN THE LED ON LOW VOLTAGE LEVEL
  delay(3000);
  // put your main code here, to run repeatedly:

}
