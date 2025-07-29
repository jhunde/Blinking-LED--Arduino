int LEDpin = 13;
int delayTime = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(LEDpin, HIGH);
    delay(delayTime);
    digitalWrite(LEDpin, LOW);
    delay(delayTime);
}