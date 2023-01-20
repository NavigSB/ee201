
int DELAY = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(DELAY);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(DELAY);
}
