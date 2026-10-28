#pragma once

/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/
#define PA0                     PIN_A0
#define PA1                     PIN_A1
#define PA2                     PIN_A2
#define PA3                     PIN_A3
#define PA4                     PIN_A4
#define PA5                     PIN_A5
#define PA6                     PIN_A6
#define PA7                     PIN_A7
#define PA8                     8
#define PA9                     9
#define PA10                    10
#define PA11                    11
#define PA12                    12
#define PA13                    13
#define PA14                    14
#define PA15                    15
#define PB0                     PIN_A8
#define PB1                     PIN_A9
#define PB2                     PIN_A10
#define PB3                     19
#define PB4                     20
#define PB5                     21
#define PB6                     22
#define PB7                     23
#define PB8                     24
#define PB9                     25
#define PB10                    26
#define PB12                    27
#define PB13                    28
#define PB14                    29
#define PB15                    30
#define PC13                    31
#define PC14                    32
#define PC15                    33
#define PE2                     34
#define PH0                     35
#define PH1                     36
#define PH2                     37

// Alternate pins number
#define PA0_ALT1                (PA0  | ALT1)
#define PA1_ALT1                (PA1  | ALT1)
#define PA1_ALT2                (PA1  | ALT2)
#define PA2_ALT1                (PA2  | ALT1)
#define PA2_ALT2                (PA2  | ALT2)
#define PA3_ALT1                (PA3  | ALT1)
#define PA3_ALT2                (PA3  | ALT2)
#define PA4_ALT1                (PA4  | ALT1)
#define PA5_ALT1                (PA5  | ALT1)
#define PA5_ALT2                (PA5  | ALT2)
#define PA7_ALT1                (PA7  | ALT1)
#define PA7_ALT2                (PA7  | ALT2)
#define PA7_ALT3                (PA7  | ALT3)
#define PA8_ALT1                (PA8  | ALT1)
#define PA8_ALT2                (PA8  | ALT2)
#define PA8_ALT3                (PA8  | ALT3)
#define PA9_ALT1                (PA9  | ALT1)
#define PA9_ALT2                (PA9  | ALT2)
#define PA10_ALT1               (PA10 | ALT1)
#define PA11_ALT1               (PA11 | ALT1)
#define PA12_ALT1               (PA12 | ALT1)
#define PA15_ALT1               (PA15 | ALT1)
#define PA15_ALT2               (PA15 | ALT2)
#define PB0_ALT1                (PB0  | ALT1)
#define PB0_ALT2                (PB0  | ALT2)
#define PB1_ALT1                (PB1  | ALT1)
#define PB1_ALT2                (PB1  | ALT2)
#define PB3_ALT1                (PB3  | ALT1)
#define PB3_ALT2                (PB3  | ALT2)
#define PB4_ALT1                (PB4  | ALT1)
#define PB5_ALT1                (PB5  | ALT1)
#define PB6_ALT1                (PB6  | ALT1)
#define PB6_ALT2                (PB6  | ALT2)
#define PB7_ALT1                (PB7  | ALT1)
#define PB10_ALT1               (PB10 | ALT1)
#define PB13_ALT1               (PB13 | ALT1)
#define PB14_ALT1               (PB14 | ALT1)
#define PB14_ALT2               (PB14 | ALT2)
#define PB15_ALT1               (PB15 | ALT1)
#define PB15_ALT2               (PB15 | ALT2)

#define NUM_DIGITAL_PINS        38
#define NUM_ANALOG_INPUTS       11



/* Alias */
#define A_PHASE_UL				PB15
#define A_PHASE_UH				PA10
#define A_PHASE_VL				PB14
#define A_PHASE_VH				PA9
#define A_PHASE_WL				PB13
#define A_PHASE_WH				PA8

#define PIN_SS_DRIVER			PE2	//Gate driver chip select
#define PIN_NFAULT				PC15	//Gate driver fault pin

#define A_VBUS					PA0		//Pin to sense supply voltage, connected to COMP4
#define BRAKE_RESISTOR			PB1		//Brake resistor control, also connected to output of COMP4
#define BRAKE_AF				14		//Alternate function 14
#define BRAKE_DAC				DAC1	//DAC1
#define BRAKE_DAC_CHAN			DAC_CHANNEL_1	//Channel 1
#define BRAKE_COMP				COMP1	//Comparator 1
#define BRAKE_COMP_PLUS			COMP_INPUT_PLUS_IO1
#define BRAKE_COMP_MINUS		COMP_INPUT_MINUS_DAC1_CH1

#define VBUS_MUL_FACTOR			23		//Multiply the adc voltage read by this value to get the supply voltage

//BEMF inputs are connected to comparators with a 10k resistor to phase, 1k to 3.3v and 1k to gnd, so it's offset slightly above ground

#define A_CURRU					PA1		//Current sense connected to phase U
#define A_BEMFU					PA4		//BEMF connected to comparator 3 for phase U

#define A_CURRV					PA2		//Current sense connected to phase V
#define A_BEMFV					PA5		//BEMF connected to comparator 4 for phase V

#define A_CURRW					PA3		//Current sense connected to phase W
#define A_BEMFW					PA7		//BEMF connected to comparator 1 for phase W

#define A_POTENTIOMETER			PA6
#define A_TEMPERATURE			PB0

//Voltage divider based on CMFA104J4250HANT and 100k resistor
#define NTC_B_CONSTANT			4250	//B = ln(R/R0)/(1/T-1/T0)
#define NTC_T0					(273.15f+25)//Kelvin
#ifndef NTC_DIVIDER_BALANCE
#define NTC_DIVIDER_BALANCE		(22.f/100.f) //R1 (value of the other resistance in the voltage divider) over R0 (resistance of NTC at T0)
#endif

//FDCAN transceiver is always on
#define CAN_RX					PC14
#define CAN_TX					PC13

#define SWDIO					PA13
#define SWCLK					PA14

#define ENCODER_A				PB3		//TIM2_CH1 @ J5
#define ENCODER_B				PA15	//TIM2_CH2 @ J5
#define ENCODER_Z				PB4		//GPIO @ J5

// On-board LED pin number
#ifndef LED_BUILTIN
	#define LED_BUILTIN			PH2		//Drive high to turn on, also BOOT0
#endif

// SPI definitions
#ifndef PIN_SPI_SS
	#define PIN_SPI_SS				PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS1
	#define PIN_SPI_SS1				PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS2
	#define PIN_SPI_SS2				PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS3
	#define PIN_SPI_SS3				PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_MOSI
	#define PIN_SPI_MOSI			PB5		//SPI3_MOSI @ J6
#endif
#ifndef PIN_SPI_MISO
	#define PIN_SPI_MISO			PB6		//SPI3_MISO @ J6
#endif
#ifndef PIN_SPI_SCK
	#define PIN_SPI_SCK				PB7		//SPI3_SCK @ J6
#endif

//Qwiic-standard I2C on J1
// I2C definitions
#ifndef PIN_WIRE_SDA
	#define PIN_WIRE_SDA			PB12
#endif
#ifndef PIN_WIRE_SCL
	#define PIN_WIRE_SCL			PB10
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
	#define TIMER_TONE			TIM6
#endif
#ifndef TIMER_SERVO
	#define TIMER_SERVO			TIM7
#endif

// UART Definitions
#define SERIAL_UART_INSTANCE	0

//LPUART1 on J7
// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
	#define PIN_SERIAL_RX			PB8
#endif
#ifndef PIN_SERIAL_TX
	#define PIN_SERIAL_TX			PB9
#endif

/* HAL configuration */
#define HSE_VALUE				(8000000UL)

/* Extra HAL modules */
#if !defined(HAL_DAC_MODULE_DISABLED)
	#define HAL_DAC_MODULE_ENABLED
#endif
#if !defined(HAL_FDCAN_MODULE_DISABLED)
	#define HAL_FDCAN_MODULE_ENABLED
#endif