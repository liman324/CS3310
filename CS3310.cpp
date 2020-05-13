#include <CS3310.h>

CS3310::CS3310(uint8_t cs, uint8_t sclk, uint8_t sdatai){
            CS = cs;
            SCLK = sclk;
            SDATAI = sdatai;
      pinMode(CS,OUTPUT);
      pinMode(SCLK,OUTPUT);
      pinMode(SDATAI,OUTPUT);
}

void CS3310::setVol(byte r, byte l){
     // start 
     digitalWrite(CS,HIGH);
     digitalWrite(SCLK,HIGH);
     delay(2);
     digitalWrite(CS,LOW);

     //  R
  for(int i = 7; i >= 0; i--){
        digitalWrite(SCLK,LOW);//delay(1);
        digitalWrite(SDATAI, (r >> i) & 0x01);delay(1);
        digitalWrite(SCLK,HIGH);delay(1);
  }

     //  L
  for(int i = 7; i >= 0; i--){
        digitalWrite(SCLK,LOW);//delay(1);
        digitalWrite(SDATAI, (l >> i) & 0x01);delay(1);
        digitalWrite(SCLK,HIGH);delay(1);
  }
   // end
   digitalWrite(CS,HIGH);
}
