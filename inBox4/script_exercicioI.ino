int valorIR;

void setup() {
	Serial.begin(9600);
}

void loop() {
	valorIR = analogRead(A0);
		Serial.println(valorIR);
	delay(500);

	if(valorIR < 500) {
		Serial.println("Menor que 500");
	}
	else{
		Serial.println("Maior ou igual a 500");
	}
}
