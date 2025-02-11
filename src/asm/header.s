.segment "HEADEER"
.byte 'N', 'E', 'S', $1A
.byte $02                 ; PRG ROM: 2 × 16 KB = 32 KB
.byte $02                 ; CHR ROM: 2 × 8 KB = 16 KB
.byte %00000000           ; Mapper low nibble, mirroring (horizontal)
.byte %00001000           ; Mapper high nibble + NES 2.0 flag (bit 2 set)
.byte $00                 ; PRG-ROM MSB (0, meaning <512KB)
.byte $00                 ; CHR-ROM MSB (0, meaning <512KB)
.byte $00                 ; Submapper (0)
.byte $00                 ; PRG-RAM / PRG-NVRAM (none)
.byte $00                 ; CHR-RAM / CHR-NVRAM (none)
.byte $00                 ; TV system (0 = NTSC)
.byte $00, $00, $00, $00  ; Reserved (must be 0)
