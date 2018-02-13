// http://www.hacktronics.com/Tutorials/arduino-and-7-segment-led.html
 
byte seven_seg_digits[10][7] = { { 0,0,0,0,0,0,1 },  // = 0
                                 { 1,0,0,1,1,1,1 },  // = 1
                                 { 0,0,1,0,0,1,0 },  // = 2
                                 { 0,0,0,0,1,1,0 },  // = 3
                                 { 1,0,0,1,1,0,0 },  // = 4
                                 { 0,1,0,0,1,0,0 },  // = 5
                                 { 0,1,0,0,0,0,0 },  // = 6
                                 { 0,0,0,1,1,1,1 },  // = 7
                                 { 0,0,0,0,0,0,0 },  // = 8
                                 { 0,0,0,1,1,0,0 }   // = 9
                               };
 
void setup() {                
  pinMode(2, OUTPUT);   
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  writeDot(0);  // Inicia com o "ponto" (o signal de casas decimais led) desligado
}
 
void writeDot(byte dot) {
  digitalWrite(9, dot);
}
 
void sevenSegWrite(byte digit) {
  byte pin = 2;
  for (byte segCount = 0; segCount < 7; ++segCount) {
     digitalWrite(pin, seven_seg_digits[digit][segCount]);
     ++pin;   
   } 
} 
 
void loop() {   
  for (byte count = 10; count > 0; --count) {
    delay(1000);
    sevenSegWrite(count - 1); 
  }
 
  delay(4000);   // Aguarda 4 segundos para recomeçar a contar
}
