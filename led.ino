int ledAmarelo = 13;
int ledVerde = 10;
int ledVermelho = 8;

void setup() {                
  
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void verde() {
  
  digitalWrite(ledVerde, HIGH);  
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
  delay(5000);
}

void vermelho() {
  
  digitalWrite(ledVerde, LOW);  
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(5000);
}

void amarelo() {
  
  digitalWrite(ledVerde, LOW);  
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, LOW);
  delay(5000);
}

void loop() {

  verde();
  amarelo();
  vermelho();
}
