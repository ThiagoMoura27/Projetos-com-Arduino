int portaLed = 10; //Porta a ser utilizada para ligar o led  
int portaLDR = A5; //Porta analógica utilizada pelo LDR  
  
void setup()  
{  
  Serial.begin(9600);
  pinMode(portaLed, OUTPUT); //Define a porta do Led como saída  
}  
   
void loop()  
{  
  int estado = analogRead(portaLDR);  //Lê o valor fornecido pelo LDR  

   Serial.println(estado);
  // Caso o valor lido na porta analógica seja maior do que 
  // 800, acende o LED  
  // Ajuste o valor abaixo de acordo com o seu circuito  
  if (estado > 1000)    
  {  
    digitalWrite(portaLed, HIGH);  
    Serial.println("Luz acesa!");
  }  
  else  //Caso contrário, apaga o led  
  {  
    digitalWrite(portaLed, LOW);  
    Serial.println("Luz apagada");
  }  
}  
