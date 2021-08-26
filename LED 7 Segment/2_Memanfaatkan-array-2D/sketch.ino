byte pinName[8] = {6, 7, 8, 9, 10, 11, 12, 13};
byte digit0[8]={HIGH,LOW,LOW,LOW,LOW,LOW,LOW,HIGH};
byte digit1[8]={HIGH,HIGH,LOW,LOW,HIGH,HIGH,HIGH,HIGH};
byte digit2[8]={HIGH,LOW,LOW,HIGH,LOW,LOW,HIGH,LOW};
byte digit3[8]={HIGH,LOW,LOW,LOW,LOW,HIGH,HIGH,LOW};
byte digit4[8]={HIGH,HIGH,LOW,LOW,HIGH,HIGH,LOW,LOW};
byte digit5[8]={HIGH,LOW,HIGH,LOW,LOW,HIGH,LOW,LOW};
byte digit6[8]={HIGH,LOW,HIGH,LOW,LOW,LOW,LOW,LOW};
byte digit7[8]={HIGH,LOW,LOW,LOW,HIGH,HIGH,HIGH,HIGH};
byte digit8[8]={HIGH,LOW,LOW,LOW,LOW,LOW,LOW,LOW};
byte digit9[8]={HIGH,LOW,LOW,LOW,LOW,HIGH,LOW,LOW};

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
    digitalWrite(pinName[i], digit0[i]);
  }
  delay(1000);
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit1[i]);
  }
  delay(1000);
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit2[i]);
  }
  delay(1000);
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit3[i]);
  }
  delay(1000);
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit4[i]);
  }
  delay(1000);
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit5[i]);
  }
  delay(1000);
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit6[i]);
  }
  delay(1000);
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit7[i]);
  }
  delay(1000);
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit8[i]);
  }
  delay(1000);
  for(byte i=0; i<8; i++){
    digitalWrite(pinName[i], digit9[i]);
  }
  delay(1000);
}
