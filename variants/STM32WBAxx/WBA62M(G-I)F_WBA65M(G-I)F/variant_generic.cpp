/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_GENERIC_WBA62MGFX) || defined(ARDUINO_GENERIC_WBA62MIFX) ||\
    defined(ARDUINO_GENERIC_WBA65MGFX) || defined(ARDUINO_GENERIC_WBA65MIFX)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
  PA_0,   // D0/A0
  PA_1,   // D1/A1
  PA_2,   // D2/A2
  PA_3,   // D3/A3
  PA_4,   // D4/A4
  PA_5,   // D5/A5
  PA_6,   // D6/A6
  PA_7,   // D7/A7
  PA_8,   // D8/A8
  PA_9,   // D9
  PA_10,  // D10
  PA_11,  // D11
  PA_12,  // D12
  PA_13,  // D13
  PA_14,  // D14
  PA_15,  // D15
  PB_0,   // D16
  PB_1,   // D17
  PB_2,   // D18
  PB_3,   // D19
  PB_4,   // D20
  PB_5,   // D21
  PB_6,   // D22
  PB_7,   // D23
  PB_8,   // D24
  PB_9,   // D25/A9
  PB_10,  // D26
  PB_11,  // D27
  PB_12,  // D28
  PB_13,  // D29
  PB_14,  // D30
  PB_15,  // D31
  PC_0,   // D32
  PC_1,   // D33
  PC_3,   // D34
  PC_4,   // D35
  PC_5,   // D36
  PC_6,   // D37
  PC_7,   // D38
  PC_8,   // D39
  PC_13,  // D40
  PC_14,  // D41
  PC_15,  // D42
  PD_5,   // D43
  PD_6,   // D44
  PD_7,   // D45
  PD_8,   // D46
  PD_9,   // D47
  PD_14,  // D48
  PE_0,   // D49
  PE_1,   // D50
  PE_2,   // D51
  PE_3,   // D52
  PH_3    // D53
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA2
  3,  // A3,  PA3
  4,  // A4,  PA4
  5,  // A5,  PA5
  6,  // A6,  PA6
  7,  // A7,  PA7
  8,  // A8,  PA8
  25  // A9,  PB9
};

#endif /* ARDUINO_GENERIC_* */
