
int inVal = 0;
int DELAY = 1500;

byte nums[10] = {64, 121, 36, 48, 25, 18, 2, 120, 0, 16};
int pinStart = 2;
int segVal = 9;

void setup() {
  Serial.begin(9600);
  for(int i = pinStart; i < pinStart + 7; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  lightSevenSeg(nums[segVal]);
  segVal--;
  if(segVal < 0) {
    segVal = 9;
  }
  delay(DELAY);
}

void lightSevenSeg(byte values) {
    byte values_temp = values;
    for(int i = 0; i < 7; i++) {
        if(values_temp % 2 == 0) {
            digitalWrite(pinStart + i, LOW);
        } else {
            digitalWrite(pinStart + i, HIGH);
        }
        values_temp = values_temp >> 1;
    }
}
