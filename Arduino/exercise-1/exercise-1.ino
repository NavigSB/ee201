
int DELAY = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(DELAY);
  digitalWrite(13, LOW);
  delay(DELAY);
}
