int var;
int varTemp;

void setup(){
   Serial.begin(9600);
   pinMode(A0, INPUT);  
  
}

void loop(){
   var = analogRead(A0);

   varTemp = map(var, 20, 358, -40, 125);

   Serial.print("Sensor Temperatura: ");
   Serial.println(analogRead(A0));
   Serial.print("Temperatura: ");
   Serial.println(varTemp);
   Serial.println("");
   delay(100);
}