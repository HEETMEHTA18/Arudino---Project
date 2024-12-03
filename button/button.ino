const int buttonPin=32;
const int ledpin=19;
const int suppl=27;
const int ground=25;
int buttonState=0;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(buttonPin,INPUT);
  pinMode(suppl,OUTPUT);
  pinMode(ground,OUTPUT);
  digitalWrite(suppl,HIGH);
  digitalWrite(ground,LOW);
  // put your setup code here, to run once:

}

void loop() {
  buttonState=digitalRead(buttonPin);
  if(buttonState==HIGH)
  {
    digitalWrite(ledpin,HIGH);
    
  }
  else
  {
    digitalWrite(ledpin,LOW);
  }
  // put your main code here, to run repeatedly:
}
