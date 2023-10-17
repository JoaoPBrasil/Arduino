// C++ code
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  float valor = analogRead(A0);
  Serial.println((valor * 5) / 1023);
}
