/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2016 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef Arduino_h
#define Arduino_h


#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// some libraries and sketches depend on this AVR stuff,
// assuming Arduino.h or WProgram.h automatically includes it...
//
#include "avr/pgmspace.h"
#include "avr/interrupt.h"

#include "binary.h"
#include "itoa.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "nrf_rtc.h"

#include "wiring_constants.h"

/* sketch */
void setup( void ) ;
void loop( void ) ;

#include "WVariant.h"


#include "delay.h"

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus


// Include board variant
#include "variant.h"

#include "wiring.h"
#include "wiring_digital.h"
#include "wiring_analog.h"
#include "WString.h"


#endif //Arduino_h