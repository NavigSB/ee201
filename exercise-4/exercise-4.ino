
int inVal = 0;
int DELAY = 1000;

byte nums[1] = {1};
int pinStart = 2;

void setup() {
  Serial.begin(9600);
  for(int i = pinStart; i < pinStart + 7; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  
}

void light_seven_seg(byte values) {
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