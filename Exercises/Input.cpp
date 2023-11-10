// C++ code
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0)
  {
    String leitura = Serial.readString();
    Serial.println(leitura);
  }
  
    int valor = analogRead(A0);
    float volts = (valor * 5.0f / 1023.0f);
    //Serial.print(volts);
    //Serial.println("V");
}