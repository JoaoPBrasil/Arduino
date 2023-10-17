
void setup()
{
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  if (digitalRead(5) == HIGH) {
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
  } if (digitalRead(6) == HIGH) {
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
  } if (digitalRead(7) == HIGH) {
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  } else {
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
}
