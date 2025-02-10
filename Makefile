.PHONY: build

build:
	cl65 -t nes -o ./build/nesnes.nes ./src/index.c
