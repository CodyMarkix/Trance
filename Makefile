.PHONY: build

build:
	cl65 -t nes -I ./include -o ./build/nesnes.nes ./src/index.c
	mv src/index.o build/index.o
