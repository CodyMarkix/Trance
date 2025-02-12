source=./src/*.c
object=./src/index.o

.PHONY: build

build:
	cl65 -Oirs -t nes -I ./include -o ./build/trance.nes $(source)

	# This part is not to be uncommented as it does not work (I am probably doing something very wrong)
	# ------------------------
	# NES header
	# ca65 -o build/header.o src/asm/header.s

	# Main source code
	# cc65 -Oi -t nes -I ./include -o ./build/index.s ./src/index.c
	# ca65 -o build/index.o build/index.s
	# ld65 -t nes -o ./build/nesgame.nes ./build/header.o ./build/index.o
	
