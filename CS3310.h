//  Alexander Liman
//  liman324@yandex.ru
//  rcl-radio.ru

#ifndef  CS3310_H
#define  CS3310_H

#include <Arduino.h>


class  CS3310
  {
    public:

  CS3310(uint8_t, uint8_t, uint8_t);
  void setVol(byte r, byte l);
  
    private:

  uint8_t CS;
  uint8_t SCLK;
  uint8_t SDATAI;

  };
#endif
