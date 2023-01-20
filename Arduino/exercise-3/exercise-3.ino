
int inVal = 0;
int DELAY = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(0, INPUT);
}

void loop() {
  inVal = digitalRead(0);
  if(inVal == LOW) {
    Serial.println("It's 2023");
  } else {
    Serial.println("Hello World!");
  }
  delay(DELAY);
}
