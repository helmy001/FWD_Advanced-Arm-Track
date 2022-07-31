/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SysCtrl_Lcfg.c
 *       Module:  System Control Lcfg
 *
 *  Description:  ----
 *  
 *********************************************************************************************************************/
 
 
 /**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
 #include "SysCtrl_Cfg.h"
 
 
 
 
 
 /**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
 
 
 /*****************
	Watch_dog_Present
	Timer_16_32_Present 
	GPIO_Present				
	MPU_Present					
	Hibernation_Present
	Uart_Present				
	SSI_Present					
	I2C_Present					
	Serial_Bus_Present	
	CAN_Present 			
	ADC_Present					
	Analog_Comp_Present	
	PWM_Present					
	QEI_Present					
	EEPROM_Present		
	Timer_32_64_Present 	
 ********************/
 
 
 
SYS_CTRL_CLK_CONFIG	SysCtrl_Config[Num_Of_Peripherals_TO_EN]={
																																{Timer_16_32_Present,0},
																																{GPIO_Present,5},
																														 };

																			
																			
																			