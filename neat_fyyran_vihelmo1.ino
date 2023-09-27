// C++ code
//
const int Tilt =3;
const int MD =4;
int reading =0;
void setup()
{
pinMode(MD,OUTPUT);
pinMode(Tilt,INPUT);
  
}

void loop()
{
 reading = digitalRead(Tilt);
  if (reading==HIGH){
  digitalWrite(MD,HIGH);}
  else{
  digitalWrite(MD,LOW);}
}