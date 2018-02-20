/*********************************
 ***Autor: Leonardo Dalla Porta****
 ***********25/05/2014*************
 *************Atenção**************
 ***O Codigo esta livre para uso,**
 *desde que seja mantida sua fonte* 
 ********e seu autor.**************
 ********Faça um bom uso***********
 ******Att. Equipe UsinaInfo*******
 *********************************/
 
int umidade;
  
void setup()
{
 Serial.begin(9600);
 Serial.println("--- sensor de humildade do solo --- ");
 pinMode(13, OUTPUT);
}
void loop()
{
 umidade = analogRead(A0);
 int Porcento = map(umidade, 1023, 0, 0, 100);
  
 Serial.print(Porcento);
 Serial.println("%");
 if(Porcento <=70)
 {
 Serial.println("Irrigando...");
 digitalWrite(13, HIGH);
 }
  
 else
 {
 digitalWrite(13, LOW);
 }
 delay(1000);
}
