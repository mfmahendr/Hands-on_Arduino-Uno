byte pinName[8] = {6, 7, 8, 9, 10, 11, 12, 13};
byte off[8] = {HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH};
byte digit[10][8]={{HIGH,LOW,LOW,LOW,LOW,LOW,LOW,HIGH},
               {HIGH,HIGH,LOW,LOW,HIGH,HIGH,HIGH,HIGH},
               {HIGH,LOW,LOW,HIGH,LOW,LOW,HIGH,LOW},
               {HIGH,LOW,LOW,LOW,LOW,HIGH,HIGH,LOW},
               {HIGH,HIGH,LOW,LOW,HIGH,HIGH,LOW,LOW},
               {HIGH,LOW,HIGH,LOW,LOW,HIGH,LOW,LOW},
               {HIGH,LOW,HIGH,LOW,LOW,LOW,LOW,LOW},
               {HIGH,LOW,LOW,LOW,HIGH,HIGH,HIGH,HIGH},
               {HIGH,LOW,LOW,LOW,LOW,LOW,LOW,LOW},
               {HIGH,LOW,LOW,LOW,LOW,HIGH,LOW,LOW}};
byte nim6Digit[6] = {4,6,0,5,5,0};

void setup() {
  // put your setup code here, to run once:
  for(byte i=0; i<8;i++){
    pinMode(pinName[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(byte i=0;i<6;i++){
    for(byte j=0; j<8; j++){
      digitalWrite(pinName[j], digit[nim6Digit[i]][j]);
    }
    delay(725);
    for(byte j=0; j<8; j++){
      digitalWrite(pinName[j], off[j]);
    }
    delay(500);
  }
  delay(1000);
}
