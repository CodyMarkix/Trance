#ifndef APU_H_
#define APU_H_

#define APU_FRAME_IRQ *((volatile uint16_t*)0x4017)
#define DMC_CHANNEL *((volatile uint16_t*)0x4010)

#define PULSE_ONE *((volatile uint16_t*)0x4000)
#define PULSE_TWO *((volatile uint16_t*)0x4004)
#define TRIG_WAVE *((volatile uint16_t*)0x400B)
#define NOISE *((volatile uint16_t*)0x400C)

#endif // end APU_H_
