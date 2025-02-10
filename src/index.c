#include <unistd.h>
#include <nes.h>

#define BASE_RAM 0x0800


int onReset() {
	__asm__(
		"sei \n\t"
		"cld \n\t"
		"ldx #$40 \n\t"
		"stx $4017 \n\t"
		"ldx #$ff \n\t"
		("txs")
		("inx")
	__asm__("stx $2000");
	__asm__("stx $2001");
	__asm__("stx $4010");

	return 0;
}

void gameLoop() {
	waitvsync();
	
}

int main(void) {
	int hasReset = onReset();
	if (hasReset == 0) {
		gameLoop();
	}

	return 0;
}
