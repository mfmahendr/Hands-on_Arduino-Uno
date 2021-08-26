// Tipe datanya sengaja dibuat byte karena 
// tidak membutuhkan terlalu banyak memori
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
byte cnt,i;

void setup() {
  // put your setup code here, to run once:
  for(i=0; i<8;i++){
    pinMode(pinName[i], OUTPUT);
  }
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)==LOW){
    if (digitalRead(2)==LOW){
	    delay(10);
	    if(digitalRead(2)==LOW){
      	delay(10);
  	    while (!digitalRead(2)){delay(1);}

        if(cnt<=0){
          cnt=9;
        }else{
          cnt--;
        }
	    }
    }
    while(digitalRead(2)==LOW){}
  }
  else if(digitalRead(3)==LOW){
    if (digitalRead(3)==LOW){
	    delay(10);
	    if(digitalRead(3)==LOW){
      	delay(10);
  	    while (!digitalRead(3)){delay(1);}
        if(cnt>=9){
          cnt=0;
        }else{
          cnt++;
        }
	    }
    }
    while(digitalRead(3)==LOW){}
  }

  for(int i=0;i<8;i++){
    digitalWrite(pinName[i], digit[cnt][i]);
  }
}