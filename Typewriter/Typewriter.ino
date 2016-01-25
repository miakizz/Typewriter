void setup() {
  for (int i=2; i<11;i++){pinMode(i,OUTPUT);}
  for (int x=14;x<23;x++){pinMode(x,INPUT_PULLUP);}
  Serial.begin(115200);
}

void loop() {
  delay(10);
  int scan=0;
  int sig=0;
  for (scan=2; scan<11;scan++){
    digitalWrite(scan,HIGH);
    for (sig=14;sig<23;sig++){
      if (digitalRead(sig) == 0){
        Serial.print(scan);
        Serial.print(" and ");
        Serial.println(sig);
       }
     digitalWrite(scan,LOW);
    }
  }
  
}
