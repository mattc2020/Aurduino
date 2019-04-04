/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
  if (sensorValue<120) {
  digitalWrite(2, HIGH);
}
  if (sensorValue>120) {
  digitalWrite(2, LOW);
}
  if (sensorValue>115) {
  digitalWrite(11, LOW);
}
  if (sensorValue<115) {
  digitalWrite(11, HIGH);
}
  if (sensorValue<110) {
  digitalWrite(13, HIGH);
}
  if (sensorValue>110) {
  digitalWrite(13, LOW);
}
  if (sensorValue<100) {
  digitalWrite(9, HIGH);
}
  if (sensorValue>100) {
  digitalWrite(9, LOW);
}
  if (sensorValue<90) {
  digitalWrite(6, HIGH);
}
  if (sensorValue>90) {
  digitalWrite(6, LOW);
}
  if (sensorValue<80) {
  digitalWrite(4, HIGH);
}
  if (sensorValue>80) {
  digitalWrite(4, LOW);
}
}
