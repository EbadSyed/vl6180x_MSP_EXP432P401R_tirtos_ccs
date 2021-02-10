/*
 *  ======== ti_drivers_config.h ========
 *  Configured TI-Drivers module declarations
 *
 *  DO NOT EDIT - This file is generated for the MSP_EXP432P401R
 *  by the SysConfig tool.
 */
#ifndef ti_drivers_config_h
#define ti_drivers_config_h

#define CONFIG_SYSCONFIG_PREVIEW

#define CONFIG_MSP_EXP432P401R

#ifndef DeviceFamily_MSP432P401x
#define DeviceFamily_MSP432P401x
#endif

#include <ti/devices/DeviceFamily.h>

#include <stdint.h>

/* support C++ sources */
#ifdef __cplusplus
extern "C" {
#endif


/*
 *  ======== GPIO ========
 */

/* P3.6 */
#define CONFIG_GPIO_0               0
/* P3.7 */
#define CONFIG_GPIO_1               1
/* P3.2 */
#define CONFIG_GPIO_2               2
/* P5.2 */
#define CONFIG_GPIO_3               3

/* LEDs are active high */
#define CONFIG_GPIO_LED_ON  (1)
#define CONFIG_GPIO_LED_OFF (0)

#define CONFIG_LED_ON  (CONFIG_GPIO_LED_ON)
#define CONFIG_LED_OFF (CONFIG_GPIO_LED_OFF)


/*
 *  ======== I2C ========
 */

/*
 *  SCL: P6.5
 *  SDA: P6.4
 *  BAS Sensors BoosterPack I2C
 */
#define CONFIG_I2C_1                0
/*
 *  SCL: P2.3
 *  SDA: P2.4
 */
#define CONFIG_I2C_0                1

/* ======== I2C Addresses and Speeds ======== */
#include <ti/drivers/I2C.h>

/* ---- CONFIG_I2C_1 I2C bus components ---- */

/* BOOSTXL_BASSENSORS/TMP116 address and max speed */
#define CONFIG_I2C_1_BOOSTXL_BASSENSORS_TMP116_ADDR     (0x48)
#define CONFIG_I2C_1_BOOSTXL_BASSENSORS_TMP116_MAXSPEED (400U) /* Kbps */

/* BOOSTXL_BASSENSORS/OPT3001 address and max speed */
#define CONFIG_I2C_1_BOOSTXL_BASSENSORS_OPT3001_ADDR     (0x44)
#define CONFIG_I2C_1_BOOSTXL_BASSENSORS_OPT3001_MAXSPEED (2600U) /* Kbps */

/* BOOSTXL_BASSENSORS/HDC2010 address and max speed */
#define CONFIG_I2C_1_BOOSTXL_BASSENSORS_HDC2010_ADDR     (0x40)
#define CONFIG_I2C_1_BOOSTXL_BASSENSORS_HDC2010_MAXSPEED (400U) /* Kbps */

/* CONFIG_I2C_1 max speed (supported by all components) */
#define CONFIG_I2C_1_MAXSPEED   (400U) /* Kbps */
#define CONFIG_I2C_1_MAXBITRATE ((I2C_BitRate)I2C_400kHz)

/* ---- CONFIG_I2C_0 I2C bus components ---- */

/* no components connected to CONFIG_I2C_0 */

/* max speed unspecified, defaulting to 100 Kbps */
#define CONFIG_I2C_0_MAXSPEED   (100U) /* Kbps */
#define CONFIG_I2C_0_MAXBITRATE ((I2C_BitRate)I2C_100kHz)


/*
 *  ======== UART ========
 */

/*
 *  TX: P1.3
 *  RX: P1.2
 *  XDS110 UART
 */
#define CONFIG_UART_0               0


/*
 *  ======== Board_init ========
 *  Perform all required TI-Drivers initialization
 *
 *  This function should be called once at a point before any use of
 *  TI-Drivers.
 */
extern void Board_init(void);

/*
 *  ======== Board_initGeneral ========
 *  (deprecated)
 *
 *  Board_initGeneral() is defined purely for backward compatibility.
 *
 *  All new code should use Board_init() to do any required TI-Drivers
 *  initialization _and_ use <Driver>_init() for only where specific drivers
 *  are explicitly referenced by the application.  <Driver>_init() functions
 *  are idempotent.
 */
#define Board_initGeneral Board_init

#ifdef __cplusplus
}
#endif

#endif /* include guard */
