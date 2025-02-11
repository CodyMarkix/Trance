source=./src/index.c

.PHONY: build

build:
	cl65 -Oirs -t nes -I ./include -o ./build/trance.nes $(source)
	# NES header
	# ca65 -o build/header.o src/asm/header.s

	# Main source code
	# cc65 -Oi -t nes -I ./include -o ./build/index.s ./src/index.c
	# ca65 -o build/index.o build/index.s
	# ld65 -t nes -o ./build/nesgame.nes ./build/header.o ./build/index.o
	
