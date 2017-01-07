#ifndef ANSI_VT100_H
#define ANSI_VT100_H

#include "stm32f7xx_hal.h"

#define ESC 0x1B

const uint8_t  CURSOR_IZQUIERDA[] = {ESC,'[','1','D'};
const uint8_t  CURSOR_DERECHA  []	= {ESC,'[','C'};

#endif
