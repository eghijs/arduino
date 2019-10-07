/*******************************************\
| Código Calibrando os sensores IF TCRT5000 |
|  Autor: Erik P. Ghijs - eghijs@gmail.com  |
|     Sinta-se livre para usar ou editar    |
\*******************************************/
int Sesq = A0; // Porta do sensor esquerdo
int Sdir = A1; // Porta do sensor direito

int IResq = 0; // Pegar o valor 0 do sensor
int IRdir = 0; // Pegar o valor 0 do sensor

void setup() {
  Serial.begin(9600);
  Serial.println("---[ Monitoramento dos Sensores ]---");
  Serial.println("( SensorIR - Esq )  ( SensorIR - Dir )");  
  Serial.println(); 
}

void loop() {
  IResq = analogRead(Sesq); //De 0 a 1023
  IRdir = analogRead(Sdir); 
  Serial.print("S.Esq.: ");
  Serial.print(IResq);
  Serial.print("/t");
  Serial.print("S.Dir.: ");
  Serial.println(IRdir);
delay(250);
}
