void setup()
{
 	Serial.begin(9600);
  Serial.println("Digite: ");
  Serial.println("1 para cender o led verde e 5 para apagar.");
  Serial.println("2 para cender o led azul e 6 para apagar.");
  Serial.println("3 para cender o led cinza e 7 para apagar.");
  Serial.println("4 para cender o led vermelho e 8 para apagar.");
 Serial.println("ou digite 9 para apagar todos os leds.");

}

void loop()
{
 	if (Serial.available() > 0)
  {
    char ser = Serial.read();
      
      switch (ser) 
      {
        case '1':
          digitalWrite(8, HIGH);
        
          break;
        
        case '2':
          digitalWrite(9, HIGH);
        
          break;
        
        case '3':
          digitalWrite(10, HIGH);
        
          break;
        
        case '4':
          digitalWrite(11, HIGH);
        
          break;
        
        case '5':
          digitalWrite(8, LOW);
        
          break;
        
        case '6':
          digitalWrite(9, LOW);
        
          break;
        
        case '7':
          digitalWrite(10, LOW);
        
          break;
        
        case '8':
          digitalWrite(11, LOW);
        
          break;
        
        case '9':
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        
        break;
        
      }
  }

}
