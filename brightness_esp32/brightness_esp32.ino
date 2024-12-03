const int ledpin=19;
 int brightness=0;
 int fadeAmount=10;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(ledpin,brightness);
//change the brightness for the next loop 
brightness = brightness + fadeAmount;
//reverse the direction of the fading at the end of fade
if(brightness<=0||brightness>=255)
{
  fadeAmount=-fadeAmount;
}
//wait for 30 miliisecond
delay(10000);
}
