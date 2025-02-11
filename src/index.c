#include <stdint.h>
#include <nes.h>

#include "ppu.h"
#include "apu.h"

void clearRAM() {
	unsigned char *ptr = ((unsigned char*)0x0000);
	unsigned char i = 0;
	for (i = 0; i < 0x0800; i++) {
		ptr[i] = 0; 
	}
}

void onReset() {
	__asm__("sei");
	__asm__("cld");
	APU_FRAME_IRQ = 0x40;
	PPU_CTRL = 0x00;
	PPU_MASK = 0x00;
	DMC_CHANNEL = 0x00;

	while (!(PPU_STATUS & 0x80)) {
		clearRAM();
	}
}

void gameLoop() {
	while (1);

	// TODO: Write game
}

void main() {
	onReset();
    gameLoop();
}
