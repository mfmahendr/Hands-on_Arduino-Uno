byte pinName[8] = {6, 7, 8, 9, 10, 11, 12, 13};
byte digit1[8]={HIGH,HIGH,LOW,LOW,HIGH,HIGH,HIGH,HIGH};
byte digit2[8]={HIGH,LOW,LOW,HIGH,LOW,LOW,HIGH,LOW};

void setup() {
  // put your setup code here, to run once:
  for(byte i=0; i<8;i++){
    pinMode(pinName[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit1[i]);
  }
  delay(1000);
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit2[i]);
  }
  delay(1000);
}
