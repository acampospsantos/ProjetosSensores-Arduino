void setup(){
  pinMode(3, OUTPUT);
}

void loop() {
  tone(3, 1500, 100);
  delay(2000);
  
  tone(3, 2000, 100);
  delay(2000);
}