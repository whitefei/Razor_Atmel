/**********************************************************************************************************************
File: adc12.h                                                                

Description:
Header file for adc12.c

**********************************************************************************************************************/

#ifndef __ADC12_APP_H
#define __ADC12_APP_H

/**********************************************************************************************************************
Type Definitions
**********************************************************************************************************************/


/**********************************************************************************************************************
Constants / Definitions
**********************************************************************************************************************/
#define ADC12B_MR_INIT (u32)0x0F042700
/*
    31 [0] Reserved
    30 [0] "
    29 [0] "
    28 [0] "

    27 [1] SHTIM set for maximum time to allow for maximum source impedance
    26 [1] "
    25 [1] "
    24 [1] "

    23 [0] STARTUP set for maximum startup time at 1MHz ADC clock
    22 [0] "
    21 [0] "
    20 [0] "

    19 [0] "
    18 [1] "
    17 [0] "
    16 [0] "

    15 [0] PRESCAL is 23 (gives 1MHz  ADC clock)
    14 [0] "
    13 [1] "
    12 [0] "

    11 [0] "
    10 [1] "
    09 [1] "
    08 [1] "

    07 [0] Reserved
    06 [0] "
    05 [0] SLEEP Normal mode
    04 [0] LOWRES 12-bit resolution

    03 [0] TRGSEL not applicable
    02 [0] "
    01 [0] "
    00 [0] TRGEN Hardware triggers disabled
*/

#define ADC12B_CDR_INIT (u32)0x000000FF
/*
    31-08 [0] Reserved

    07 [1] CH7 disabled
    06 [1] CH6 disabled
    05 [1] CH5 disabled
    04 [1] CH4 disabled

    03 [1] CH3 disabled
    02 [1] CH2 disabled
    01 [1] CH1 disabled
    00 [1] CH0 disabled
*/

#define TEMPLATE_INIT (u32)0x00000000
/*
    31 [0] 
    30 [0] 
    29 [0] 
    28 [0] 

    27 [0] 
    26 [0] 
    25 [0] 
    24 [0] 

    23 [0] 
    22 [0] 
    21 [0] 
    20 [0] 

    19 [0] 
    18 [0] 
    17 [0] 
    16 [0] 

    15 [0] 
    14 [0] 
    13 [0] 
    12 [0] 

    11 [0] 
    10 [0] 
    09 [0] 
    08 [0] 

    07 [0] 
    06 [0] 
    05 [0] 
    04 [0] 

    03 [0] 
    02 [0] 
    01 [0] 
    00 [0] 
*/


#define TEMPLATE_INIT (u32)0x00000000
/*
    31 [0] 
    30 [0] 
    29 [0] 
    28 [0] 

    27 [0] 
    26 [0] 
    25 [0] 
    24 [0] 

    23 [0] 
    22 [0] 
    21 [0] 
    20 [0] 

    19 [0] 
    18 [0] 
    17 [0] 
    16 [0] 

    15 [0] 
    14 [0] 
    13 [0] 
    12 [0] 

    11 [0] 
    10 [0] 
    09 [0] 
    08 [0] 

    07 [0] 
    06 [0] 
    05 [0] 
    04 [0] 

    03 [0] 
    02 [0] 
    01 [0] 
    00 [0] 
*/

/**********************************************************************************************************************
Function Declarations
**********************************************************************************************************************/

/*--------------------------------------------------------------------------------------------------------------------*/
/* Public functions                                                                                                   */
/*--------------------------------------------------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------------------------------------------------*/
/* Protected functions                                                                                                */
/*--------------------------------------------------------------------------------------------------------------------*/
void Adc12Initialize(void);
void Adc12RunActiveState(void);


/*--------------------------------------------------------------------------------------------------------------------*/
/* Private functions                                                                                                  */
/*--------------------------------------------------------------------------------------------------------------------*/


/***********************************************************************************************************************
State Machine Declarations
***********************************************************************************************************************/
static void Adc12SM_Idle(void);    

static void Adc12SM_Error(void);         
static void Adc12SM_FailedInit(void);        


#endif /* __ADC12_APP_H */


/*--------------------------------------------------------------------------------------------------------------------*/
/* End of File                                                                                                        */
/*--------------------------------------------------------------------------------------------------------------------*/
