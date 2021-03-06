/*

Copyright (c) Future Technology Devices International 2014

THIS SOFTWARE IS PROVIDED BY FUTURE TECHNOLOGY DEVICES INTERNATIONAL LIMITED "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
FUTURE TECHNOLOGY DEVICES INTERNATIONAL LIMITED BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE GOODS OR SERVICES LOSS OF USE, DATA, OR PROFITS OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

FTDI DRIVERS MAY BE USED ONLY IN CONJUNCTION WITH PRODUCTS BASED ON FTDI PARTS.

FTDI DRIVERS MAY BE DISTRIBUTED IN ANY FORM AS LONG AS LICENSE INFORMATION IS NOT MODIFIED.

IF A CUSTOM VENDOR ID AND/OR PRODUCT ID OR DESCRIPTION STRING ARE USED, IT IS THE
RESPONSIBILITY OF THE PRODUCT MANUFACTURER TO MAINTAIN ANY CHANGES AND SUBSEQUENT WHQL
RE-CERTIFICATION AS A RESULT OF MAKING THESE CHANGES.

Abstract:

This file contains is functions for all UI fields.

Author : FTDI 

Revision History: 
0.1 - date 2013.04.24 - initial version
0.2 - date 2014.04.28 - Split in individual files according to platform

*/

#ifndef _FT_PLATFORM_H_
#define _FT_PLATFORM_H_

#define ARDUINO_PLATFORM
//#define MSVC_PLATFORM
#define  FT_ATMEGA_328P


/* Uncomment this macro to enable the FT801 specific features, enable this macro only on demo applications that support FT801. */
//#define FT_801_ENABLE 

//#define SAMAPP_DISPLAY_QVGA
#define SAMAPP_DISPLAY_WQVGA

#define ORIENTATION_PORTRAIT
//#define ORIENTATION_LANDSCAPE

#ifdef  ARDUINO_PLATFORM
#define FT_ARDUINO_ATMEGA328P_I2C
#ifdef ARDUINO_PRO_328
#define FT800_INT (3)
#define FT800_PD_N (4)
#define FT_SDCARD_CS (5)       
#define FT_ARDUINO_PRO_SPI_CS (10)
#define ARDUINO_PLATFORM_SPI
#define ARDUINO_PLATFORM_COCMD_BURST
#endif

#ifdef  FT_ATMEGA_328P
#define RTC_PRESENT
#define FT800_CS (9)
#define FT_SDCARD_CS (8)       // Which pin is sdcard enable connected to?
#define FT800_INT (3)
#define FT800_PD_N (4)
#define FT_ARDUINO_PRO_SPI_CS FT800_CS
#define ARDUINO_PLATFORM_SPI
#define ARDUINO_PLATFORM_COCMD_BURST
#endif

#endif


#ifdef ARDUINO_PLATFORM
#include <stdio.h>
#include <Arduino.h>
#include <EEPROM.h>
#include <SPI.h>
#include <avr/pgmspace.h>
#endif

#ifdef MSVC_PLATFORM
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <Windows.h>

#include "ftd2xx.h"
#include "LibMPSSE_spi.h"
#endif


#include "FT_DataTypes.h"
#include "FT_Gpu_Hal.h"
#include "FT_Gpu.h"
#include "FT_CoPro_Cmds.h"



#ifdef MSVC_PLATFORM
#define BUFFER_OPTIMIZATION
#define MSVC_PLATFORM_SPI
#endif

#ifdef ARDUINO_PLATFORM
#endif

#endif /*_FT_PLATFORM_H_*/
/* Nothing beyond this*/




