#ifndef BUMPER_STRIP_H_
#define BUMPER_STRIP_H_

#include <Arduino.h>

class BumperStrip{
    public:

        /*Constructor*/
        BumperStrip(int BumperStrip_Pin);

        /*****************************************************************************
        Function name         : void BumperStrip::init()
        Function description  : initialization & open interrupt,please put this function in "void setup()". 
        Input    parameter    : void
        Output   parameter    : 
        Return   value  	  : 
        Call     functions	  : pinMode(),attachInterrupt(),BumperStrip::BumperStrip_ISR()
        Called   functions    :
        *****************************************************************************/
        void init();
        //void BuperStrip_IT();
    private:
        int BumpterStrip_Pin_;

        /*****************************************************************************
        Function name         : void BumperStrip::BumperStrip_ISR()
        Function description  : Call this function,when interrupt is happening. It will print Debug_Flag on your Monitor.
        Input    parameter    : void
        Output   parameter    : 
        Return   value  	  : 
        Call     functions	  : Serial.println()
        Called   functions    :
        *****************************************************************************/
        static void BumperStrip_ISR();
};

#endif