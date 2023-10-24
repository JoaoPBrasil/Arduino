void setup()
{
 	Serial.begin(9600);

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
      }
  }

}
