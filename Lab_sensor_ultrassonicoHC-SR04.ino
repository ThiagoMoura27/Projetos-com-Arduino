//biblioteca do sensor ultrassonic 
#include <Ultrasonic.h>

//definição de pinos a serem usados
#define pino_trigger 4
#define pino_echo 5

Ultrasonic ultrasonic(pino_trigger, pino_echo);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Leitura de dados");
}

void loop() {
  // leitura das informações do senso em cm e pol
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  //Impressão dos dados no monitor
  Serial.print("Distancia em cm: ");
  Serial.print(cmMsec);
  Serial.print(" - Distancia em plegadas: ");
  Serial.println(inMsec);
  delay(1000);

  
}
