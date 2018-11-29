const unsigned int pin = 13;
const unsigned int delay_time_h = 50;
const unsigned int delay_time_l = 50;

void setup() {
  pinMode(pin, OUTPUT);
  for(int i =1; i<10 ; i++)
   {
    digitalWrite(pin, HIGH);
  delay(delay_time_h);
  digitalWrite(pin, LOW);
  delay(delay_time_l);
   
   }
  }

void loop() {
  
}
