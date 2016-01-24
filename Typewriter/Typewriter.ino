void setup() {
  for (int i=2,i<11,i++){pinmode(i,OUTPUT);}
  for (int i=11,i<18,i++){pinmode(i,INPUT);}
  Serial.begin(115200);
}

void loop() {
  int scan=0
  int sig=0
  int key[1]
  for (int scan=2,scan<11,scan++){
    digitalWrite(i,HIGH);
    for (int sig=11,sig<18,sig++){
      if (digitalRead(sig) == 1){
        key[0] = scan
        key[1] = sig
       }
    }
  }
  Serial.print(key);
}
