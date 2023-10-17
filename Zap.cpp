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

//ou

// C++ code
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int valor = analogRead(A0);
  float volts = (valor * 5.0f / 1023.0f);
  Serial.print(volts);
  Serial.println("V");
}
