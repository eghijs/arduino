int IResq;
int IRdir;

void setup() {
  Serial.begin(9600);
  Serial.println("--- Start Serial Monitor SEND_RCVE ---");
  Serial.println(" Type in Box above, . ");
  Serial.println("(Decimal)(Hex)(Character)");  
  Serial.println(); 
}

void loop() {
  IResq = analogRead(A0); //De 0 a 1023
  IRdir = analogRead(A1); 
  Serial.print("S.Esq.: ");
  Serial.print(IResq);
  Serial.print("/t");
  Serial.print("S.Dir.: ");
  Serial.println(IRdir);
delay(1000);
}
