/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F1827
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SW1 aliases
#define SW1_TRIS                 TRISAbits.TRISA0
#define SW1_LAT                  LATAbits.LATA0
#define SW1_PORT                 PORTAbits.RA0
#define SW1_ANS                  ANSELAbits.ANSA0
#define SW1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define SW1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define SW1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define SW1_GetValue()           PORTAbits.RA0
#define SW1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define SW1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define SW1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define SW1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set SW2 aliases
#define SW2_TRIS                 TRISAbits.TRISA1
#define SW2_LAT                  LATAbits.LATA1
#define SW2_PORT                 PORTAbits.RA1
#define SW2_ANS                  ANSELAbits.ANSA1
#define SW2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define SW2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define SW2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define SW2_GetValue()           PORTAbits.RA1
#define SW2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define SW2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define SW2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define SW2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set UDSEL aliases
#define UDSEL_TRIS                 TRISAbits.TRISA2
#define UDSEL_LAT                  LATAbits.LATA2
#define UDSEL_PORT                 PORTAbits.RA2
#define UDSEL_ANS                  ANSELAbits.ANSA2
#define UDSEL_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define UDSEL_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define UDSEL_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define UDSEL_GetValue()           PORTAbits.RA2
#define UDSEL_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define UDSEL_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define UDSEL_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define UDSEL_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set SD aliases
#define SD_TRIS                 TRISAbits.TRISA4
#define SD_LAT                  LATAbits.LATA4
#define SD_PORT                 PORTAbits.RA4
#define SD_ANS                  ANSELAbits.ANSA4
#define SD_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SD_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SD_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SD_GetValue()           PORTAbits.RA4
#define SD_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SD_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SD_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define SD_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RA6 procedures
#define RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define RA6_GetValue()              PORTAbits.RA6
#define RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set RA7 procedures
#define RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define RA7_GetValue()              PORTAbits.RA7
#define RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set ENC_A aliases
#define ENC_A_TRIS                 TRISBbits.TRISB0
#define ENC_A_LAT                  LATBbits.LATB0
#define ENC_A_PORT                 PORTBbits.RB0
#define ENC_A_WPU                  WPUBbits.WPUB0
#define ENC_A_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define ENC_A_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define ENC_A_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define ENC_A_GetValue()           PORTBbits.RB0
#define ENC_A_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define ENC_A_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define ENC_A_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define ENC_A_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)

// get/set SDA1 aliases
#define SDA1_TRIS                 TRISBbits.TRISB1
#define SDA1_LAT                  LATBbits.LATB1
#define SDA1_PORT                 PORTBbits.RB1
#define SDA1_WPU                  WPUBbits.WPUB1
#define SDA1_ANS                  ANSELBbits.ANSB1
#define SDA1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define SDA1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define SDA1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define SDA1_GetValue()           PORTBbits.RB1
#define SDA1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define SDA1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define SDA1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define SDA1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define SDA1_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define SDA1_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set ENC_B aliases
#define ENC_B_TRIS                 TRISBbits.TRISB3
#define ENC_B_LAT                  LATBbits.LATB3
#define ENC_B_PORT                 PORTBbits.RB3
#define ENC_B_WPU                  WPUBbits.WPUB3
#define ENC_B_ANS                  ANSELBbits.ANSB3
#define ENC_B_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define ENC_B_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define ENC_B_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define ENC_B_GetValue()           PORTBbits.RB3
#define ENC_B_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define ENC_B_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define ENC_B_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define ENC_B_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define ENC_B_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define ENC_B_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set SCL1 aliases
#define SCL1_TRIS                 TRISBbits.TRISB4
#define SCL1_LAT                  LATBbits.LATB4
#define SCL1_PORT                 PORTBbits.RB4
#define SCL1_WPU                  WPUBbits.WPUB4
#define SCL1_ANS                  ANSELBbits.ANSB4
#define SCL1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SCL1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SCL1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SCL1_GetValue()           PORTBbits.RB4
#define SCL1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SCL1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SCL1_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SCL1_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SCL1_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define SCL1_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF0 pin functionality
 * @Example
    IOCBF0_ISR();
 */
void IOCBF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_InterruptHandler);

*/
extern void (*IOCBF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_DefaultInterruptHandler);

*/
void IOCBF0_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF3 pin functionality
 * @Example
    IOCBF3_ISR();
 */
void IOCBF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF3_SetInterruptHandler() method.
    This handler is called every time the IOCBF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF3_SetInterruptHandler(IOCBF3_InterruptHandler);

*/
extern void (*IOCBF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF3_SetInterruptHandler() method.
    This handler is called every time the IOCBF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF3_SetInterruptHandler(IOCBF3_DefaultInterruptHandler);

*/
void IOCBF3_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/