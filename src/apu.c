#include <stdint.h>

#include "apu.h"
#include "ppu.h"

void initializeAPU() {
    // Pulse
    uint8_t silenced = 0x00;
    
    PULSE_ONE = silenced;
    PULSE_TWO = silenced;
    TRIG_WAVE = silenced;
    NOISE = silenced;    
}
