/* 
 * File:   app.h
 * Author: NonSense
 *
 * Created on 2019/04/03, 1:49
 */

#ifndef APP_H
#define	APP_H

#ifdef	__cplusplus
extern "C" {
#endif
#include <stdint.h>
#include "epwm2.h"

    void SetDuty(uint16_t duty, uint8_t ccw);
    void ProcWriteCommand(uint8_t command, uint8_t val);

#ifdef	__cplusplus
}
#endif

#endif	/* APP_H */

