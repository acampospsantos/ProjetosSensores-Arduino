// C++ code
//
#include <LiquidCrystal.h>

//Criei objeto --> Passando pinos q o display tá conectado
LiquidCrystal lcd(7,6,5,4,3,2);

void setup(){
  lcd.begin(16, 2);//Configura o modelo do display em nosso caso 16×2 --> Passo quantas colunas e linhas tem o Display
  lcd.clear(); //Comando pra limpar a tela
}

void loop(){
  //Posiciona o cursor na coluna e linha indicada no comando
  lcd.setCursor(5,0); //Setta texto - coluna x linha
  lcd.print("hello,"); //imprime o texto que vai ser expresso
  
  lcd.setCursor(5,1); //Setta texto - coluna x linha
  lcd.print("world!"); //imprime o texto que vai ser expresso
  
  delay(2000); // Delay a little bit to improve simulation performance  
}