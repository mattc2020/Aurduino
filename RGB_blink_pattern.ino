#define G 11
#define R 9
#define B 13

void setup() {
  // put your setup code here, to run once:
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(R, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(R, HIGH);
delay(1000);
digitalWrite(R,LOW);
digitalWrite(G, HIGH);
delay(1000);
digitalWrite(G, LOW);
digitalWrite(B, HIGH);
delay(1000);
digitalWrite(B, LOW);
digitalWrite(R, HIGH);
digitalWrite(G, HIGH);
delay(1000);
digitalWrite(G, LOW);
digitalWrite(B, HIGH);
delay(1000);
digitalWrite(R, LOW);
digitalWrite(G, HIGH);
delay(1000);
digitalWrite(G, LOW);
digitalWrite(B, LOW);
}
