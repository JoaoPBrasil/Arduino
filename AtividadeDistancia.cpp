// C++ code
//
int TRIGGER = 9;
int ECHO = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10); // Wait for 1000 millisecond(s)
  digitalWrite(TRIGGER, LOW);
  int time = pulseIn(ECHO, HIGH);
  
  int distance = (0.034 * time) / 2;
  
  Serial.print("A distancia e: ");
  Serial.println(distance);
  delay(1000); // Wait for 1000 millisecond(s)
  
  if (distance < 20)
  {
   digitalWrite(10, HIGH);
  }
  else
  {
   digitalWrite(10, LOW);
  }
}
