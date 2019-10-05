//A-1A = D3
//A-1B = D5

//B-1A = D6
//B-1B = D9

void setup() {
	pinMode(3, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(9, OUTPUT);	
}

/*MOTOR A = ESQUERDA
  MOTOR B = DIRETA*/

void loop() {
  //M.Esq para FRENTE e M.Dir para FRENTE = Robo anda para FRENTE
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  delay(5000);

  //M.Esq para TRAS e M.Dir para FRENTE = Robo gira para ESQUERDA
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  delay(5000);

  //M.Esq para FRENTE e M.Dir para TRAS = Robo gira para DIREITA
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  delay(5000);

  //M.Esq para PARADO e M.Dir para PARADO = Robo PARADO
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  delay(10000);
}
