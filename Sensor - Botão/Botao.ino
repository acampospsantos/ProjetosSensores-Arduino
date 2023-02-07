void setup(){
  pinMode(1, OUTPUT);
  pinMode(1, INPUT);
  Serial.begin(9600);

  digitalWrite(1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

void loop() {
  Serial.println(digitalRead(1));
  delay(10); // Delay a little bit to improve simulation performance
}