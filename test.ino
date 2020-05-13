#include <CS3310.h>

CS3310 cs(2,3,4);//CS,SCLK,SDATAI

void setup(){
  delay(100);
  audio();
  
  }

void loop(){}

void audio(){
  cs.setVol(200,200);
  // byte 0  === mute
  // byte 1...255 === -95.5...+31.5 dB (step 0.5 dB)
  }
