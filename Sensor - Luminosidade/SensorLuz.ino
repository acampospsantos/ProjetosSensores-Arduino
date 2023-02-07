void setup(){
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop(){
  Serial.print("Luminosidade: ");
  Serial.println(analogRead(A0));
  delay(10); // Delay a little bit to improve simulation performance
}