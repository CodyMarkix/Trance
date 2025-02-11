#ifndef PPU_H_
#define PPU_H_

// PPU registers
#define PPU_CTRL *((volatile uint16_t*)0x2000)
#define PPU_MASK *((volatile uint16_t*)0x2001)
#define PPU_STATUS *((volatile uint16_t*)0x2002)

#endif // end PPU_H_
