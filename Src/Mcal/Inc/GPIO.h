/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO.h
 *       Module:  GPIO
 *
 *  Description:  ----
 *  
 *********************************************************************************************************************/





/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
 #ifndef GPIO_H
 #define GPIO_H
 
 #include "GPIO_Types.h"
 #include "GPIO_Cfg.h"




/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

extern GPIO_REG_MAP	*GPIO_Config[Num_Of_Ports];
extern PIN_CONFIG Pin_Config[Num_Of_Pins_To_Init];

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION
 *********************************************************************************************************************/
 void GPIO_init();
 void Dio_ReadChannel(GPIO_PIN_NUMBER Pin_Num);
 void Dio_WriteChannel(GPIO_PIN_NUMBER Pin_Num,uint8 Level_Type);
 
 
 #endif