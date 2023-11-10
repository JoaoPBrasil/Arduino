// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop()
{
  float leitura = analogRead(A0);
  Serial.print("A leitura e: ");
  Serial.println(leitura);
  
    if (leitura < 700)
  {
   digitalWrite(10, HIGH);
  }
  else
  {
   digitalWrite(10, LOW);
  }
}