#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[ADC0]
// [ADC0]$

// $[CMU]
// [CMU]$

// $[DBG]
// DBG SWV on PF2
#ifndef DBG_SWV_PORT                            
#define DBG_SWV_PORT                             gpioPortF
#endif
#ifndef DBG_SWV_PIN                             
#define DBG_SWV_PIN                              2
#endif
#ifndef DBG_SWV_LOC                             
#define DBG_SWV_LOC                              0
#endif

// [DBG]$

// $[PTI]
// PTI DFRAME on PB13
#ifndef PTI_DFRAME_PORT                         
#define PTI_DFRAME_PORT                          gpioPortB
#endif
#ifndef PTI_DFRAME_PIN                          
#define PTI_DFRAME_PIN                           13
#endif
#ifndef PTI_DFRAME_LOC                          
#define PTI_DFRAME_LOC                           6
#endif

// PTI DOUT on PB12
#ifndef PTI_DOUT_PORT                           
#define PTI_DOUT_PORT                            gpioPortB
#endif
#ifndef PTI_DOUT_PIN                            
#define PTI_DOUT_PIN                             12
#endif
#ifndef PTI_DOUT_LOC                            
#define PTI_DOUT_LOC                             6
#endif

// [PTI]$

// $[GPIO]
// [GPIO]$

// $[I2C0]
// [I2C0]$

// $[IDAC0]
// [IDAC0]$

// $[LETIMER0]
// [LETIMER0]$

// $[LEUART0]
// [LEUART0]$

// $[MODEM]
// [MODEM]$

// $[PCNT0]
// [PCNT0]$

// $[PRS.CH0]
// [PRS.CH0]$

// $[PRS.CH1]
// [PRS.CH1]$

// $[PRS.CH2]
// [PRS.CH2]$

// $[PRS.CH3]
// [PRS.CH3]$

// $[PRS.CH4]
// [PRS.CH4]$

// $[PRS.CH5]
// [PRS.CH5]$

// $[PRS.CH6]
// [PRS.CH6]$

// $[PRS.CH7]
// [PRS.CH7]$

// $[PRS.CH8]
// [PRS.CH8]$

// $[PRS.CH9]
// [PRS.CH9]$

// $[PRS.CH10]
// [PRS.CH10]$

// $[PRS.CH11]
// [PRS.CH11]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[USART0]
// USART0 CTS on PF2
#ifndef USART0_CTS_PORT                         
#define USART0_CTS_PORT                          gpioPortF
#endif
#ifndef USART0_CTS_PIN                          
#define USART0_CTS_PIN                           2
#endif
#ifndef USART0_CTS_LOC                          
#define USART0_CTS_LOC                           22
#endif

// USART0 RTS on PF3
#ifndef USART0_RTS_PORT                         
#define USART0_RTS_PORT                          gpioPortF
#endif
#ifndef USART0_RTS_PIN                          
#define USART0_RTS_PIN                           3
#endif
#ifndef USART0_RTS_LOC                          
#define USART0_RTS_LOC                           22
#endif

// USART0 RX on PA1
#ifndef USART0_RX_PORT                          
#define USART0_RX_PORT                           gpioPortA
#endif
#ifndef USART0_RX_PIN                           
#define USART0_RX_PIN                            1
#endif
#ifndef USART0_RX_LOC                           
#define USART0_RX_LOC                            0
#endif

// USART0 TX on PA0
#ifndef USART0_TX_PORT                          
#define USART0_TX_PORT                           gpioPortA
#endif
#ifndef USART0_TX_PIN                           
#define USART0_TX_PIN                            0
#endif
#ifndef USART0_TX_LOC                           
#define USART0_TX_LOC                            0
#endif

// [USART0]$

// $[USART1]
// [USART1]$

// $[CUSTOM_PIN_NAME]
// [CUSTOM_PIN_NAME]$

#endif // PIN_CONFIG_H

