.PHONY: build

build:
	# NES header
	ca65 -o build/header.o src/asm/header.s

	# Main source code
	cc65 -Oi -t nes -I ./include -o ./build/index.s ./src/index.c
	ca65 -o build/index.o build/index.s
