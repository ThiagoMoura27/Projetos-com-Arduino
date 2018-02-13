//Semáforo
 

void setup() {
  pinMode(10,OUTPUT);     //define o pino 10 como saída
  pinMode(11,OUTPUT);     //define o pino 11 como saída
  pinMode(12,OUTPUT);    //define o pino 12 como saída
}
//Método loop, é executado enquanto o arduino estiver ligado.
void loop() {
  //Controle do led verde
  digitalWrite(10,HIGH);  //acende o led
  delay(4000);           //espera 4 segundos
  digitalWrite(10,LOW);   //apaga o led
   
  //Controle do led amarelo
  digitalWrite(11,HIGH);  //acende o led
  delay(2000);           //espera 2 segundos
  digitalWrite(11,LOW);   //apaga o led
   
  //Controle do led vermelho
  digitalWrite(12,HIGH); //acende o led
  delay(4000);           //espera 4 segundos
  digitalWrite(12,LOW);  //apaga o led
}
