#include "app.h"

void ProcWriteCommand(uint8_t command, uint8_t val){
    uint8_t stage=0;
    uint8_t tmp[3]={0,0,0};
    uint16_t duty;
    
    switch(command){
        case 0x55:      // Duty設定
            switch(stage){
                case 0:
                    tmp[0]=val;
                    stage++;
                    break;
                case 1:
                    tmp[1]=val;
                    stage++;
                    break;
                case 2:
                    
                    duty = tmp[0]&0x03;
                    duty += tmp[1]<<2;
                    SetDuty(duty, tmp[0]&0x80);
                default:
                    tmp[0]=0;
                    tmp[2]=0;
                    stage=0;
                    break;
            }
            break;
    }
}

void SetDuty(uint16_t duty, uint8_t ccw){
    if(ccw){
        EPWM2_SetSteering(0,1,0,0);
    } else {
        EPWM2_SetSteering(1,0,0,0);
    }
    EPWM2_LoadDutyValue(duty);
    return;
}