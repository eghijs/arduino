int IResq;
int IRdir;

void setup() {
	Serial.begin(9600);
}

void loop() {
  IResq = analogRead(A0); //De 0 a 1023
  IRdir = analogRead(A1); 
  Serial.println(IResq);
  Serial.print('/t');
  Serial.println(IRdir);
}
