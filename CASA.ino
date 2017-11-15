int led1 = 24;
int led2 = 36;
int led3 = 37;
int led4 = 38;
int led5 = 23;//desconectado 
int led6 = 22;//desconectado
int led7 = 21;
int led8 = 20;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,HIGH);
  delay(500);
  digitalWrite(led1,LOW);
  delay(500);
  digitalWrite(led2,HIGH);
  delay(500);
  digitalWrite(led2,LOW);
  delay(500);
  digitalWrite(led3,HIGH);
  delay(500);
  digitalWrite(led3,LOW);
  delay(500);
  digitalWrite(led4,HIGH);
  delay(500);
  digitalWrite(led4,LOW);
  delay(500);
  digitalWrite(led5,HIGH);
  delay(500);
  digitalWrite(led5,LOW);
  delay(500);
  digitalWrite(led6,HIGH);
  delay(500);
  digitalWrite(led6,LOW);
  delay(500);
  digitalWrite(led7,HIGH);
  delay(500);
  digitalWrite(led7,LOW);
  delay(500);
  digitalWrite(led8,HIGH);
  delay(500);
  digitalWrite(led8,LOW);
  delay(500);
}
