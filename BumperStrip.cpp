#include "BumperStrip.h"
#include <Arduino.h>
int Debug_Flag = 0;
BumperStrip::BumperStrip(int BumperStrip_Pin){
    BumpterStrip_Pin_ = BumperStrip_Pin;
}
void BumperStrip::init(){
     pinMode(BumpterStrip_Pin_,INPUT_PULLUP);
     attachInterrupt(digitalPinToInterrupt(BumpterStrip_Pin_),&BumperStrip::BumperStrip_ISR,CHANGE);
}
void BumperStrip::BumperStrip_ISR(){
    Serial.println(Debug_Flag);
    Debug_Flag++;
}