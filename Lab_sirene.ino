float seno;
int frequencia;
 
void setup() {
 //define o pino 7 como saída
 pinMode(7,OUTPUT);
}
 
void loop() {
 for(int x=0;x<180;x++){
  //converte graus para radiando e depois obtém o valor do seno
  seno=(sin(x*3.1416/180));
  //gera uma frequência a partir do valor do seno
  frequencia = 2000+(int(seno*1000));
  tone(7,frequencia);
  delay(2);
 }
}
