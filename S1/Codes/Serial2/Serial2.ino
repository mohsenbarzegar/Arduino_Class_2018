void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available()==1)
  {
    char inChar = (char)Serial.read();
    if (inChar == '1')
    {
      digitalWrite(13, !digitalRead(13));
    }
  }
}
