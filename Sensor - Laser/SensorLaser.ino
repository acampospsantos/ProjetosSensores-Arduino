int valorLido;

void setup(){
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop(){
  valorLido = analogRead(A0);
  
  Serial.println(valorLido);
  delay(100);
}