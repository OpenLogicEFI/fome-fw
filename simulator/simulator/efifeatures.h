/*
 * efifeatures.h
 *
 * @date Mar 7, 2014
 * @author Andrey Belomutskiy, (c) 2012-2020
 */

#pragma once

#ifndef FALSE
#define FALSE (0)
#endif /* FALSE */

#ifndef TRUE
#define TRUE (!(FALSE))
#endif /* TRUE */

// see SIM_SD1_PORT and SIM_SD2_PORT
#define TS_PRIMARY_UxART_PORT SD1
#define TS_SECONDARY_UxART_PORT SD2

#define EFI_ENABLE_ASSERTS TRUE
#define EFI_LAUNCH_CONTROL TRUE

#define EFI_TCU FALSE

#define EFI_ANTILAG_SYSTEM TRUE

#define ENABLE_PERF_TRACE FALSE

#define EFI_PRINTF_FUEL_DETAILS FALSE
#define EFI_ENABLE_CRITICAL_ENGINE_STOP TRUE
#define EFI_ENABLE_ENGINE_WARNING TRUE

#define SC_BUFFER_SIZE 4000

#define EFI_BOOST_CONTROL TRUE

#define EFI_CANBUS_SLAVE FALSE

#define EFI_CLOCK_LOCKS FALSE

#define TS_UART_MODE FALSE

#define EFI_USB_SERIAL FALSE

#define EFI_MC33816 FALSE
#define EFI_HPFP TRUE

#define EFI_BLUETOOTH_SETUP FALSE

#define EFI_GPIO_HARDWARE FALSE

#define BOARD_TLE6240_COUNT         0
#define BOARD_MC33972_COUNT			0
#define BOARD_TLE8888_COUNT 	0

#define EFI_TEXT_LOGGING TRUE

#define EFI_MEMS FALSE

#ifndef EFI_TOOTH_LOGGER
#define EFI_TOOTH_LOGGER TRUE
#endif

#define EFI_USE_UART_DMA FALSE

#define EFI_ALTERNATOR_CONTROL TRUE

#define EFI_ENGINE_AUDI_AAN FALSE
#define EFI_ENGINE_SNOW_BLOWER FALSE

/**
 * simulator works via self-stimulation which works via trigger emulation
 */
#define EFI_EMULATE_POSITION_SENSORS TRUE

#define EFI_SIGNAL_EXECUTOR_SLEEP TRUE
#define EFI_INTERNAL_ADC FALSE
#define EFI_EGT FALSE

#define EFI_SHAFT_POSITION_INPUT TRUE
#define EFI_UART_ECHO_TEST_MODE FALSE

#define EFI_ENGINE_CONTROL TRUE
#define EFI_IDLE_CONTROL TRUE

#define EFI_MAIN_RELAY_CONTROL FALSE

// Simulator supports real CAN, but not on Windows (yet?)
#define EFI_CAN_SUPPORT !EFI_SIM_IS_WINDOWS

#define EFI_WIDEBAND_FIRMWARE_UPDATE TRUE
#define EFI_MAX_31855 FALSE

#define EFI_ELECTRONIC_THROTTLE_BODY TRUE
#define EFI_VVT_PID TRUE

#ifndef HAL_TRIGGER_USE_PAL
#define HAL_TRIGGER_USE_PAL FALSE
#endif /* HAL_TRIGGER_USE_PAL */

#define EFI_DEFAILED_LOGGING FALSE
#define EFI_ENGINE_SNIFFER TRUE

#define FUEL_MATH_EXTREME_LOGGING FALSE
#define EFI_INTERNAL_FLASH TRUE
#define EFI_STORAGE_INT_FLASH TRUE
#define EFI_FLASH_WRITE_THREAD TRUE
#define EFI_STORAGE_EXT_SNOR FALSE
#define EFI_RTC FALSE
#define EFI_MALFUNCTION_INDICATOR FALSE
#define EFI_LOGIC_ANALYZER FALSE
#define DEBUG_PWM FALSE
#define EFI_SIGNAL_EXECUTOR_ONE_TIMER FALSE
#define EFI_TUNER_STUDIO_VERBOSE FALSE
#define EFI_FILE_LOGGING TRUE
#define EFI_WARNING_LED FALSE
#define EFI_VEHICLE_SPEED TRUE
#define EFI_TCU FALSE

#define EFI_SENSOR_CHART TRUE

#define EFI_TUNER_STUDIO TRUE

#define EFI_BOARD_TEST FALSE

#define EFI_LUA TRUE
#define LUA_USER_HEAP 100000

#define EFI_DYNO_VIEW TRUE
#define EFI_SENT_SUPPORT FALSE
#define EFI_CAN_SERIAL FALSE
#define EFI_USE_OPENBLT FALSE
#define EFI_SOFTWARE_KNOCK FALSE
#define ENABLE_AUTO_DETECT_HSE FALSE
