TARGET = blink

#### Setup ####
TOOLCHAIN	= rx-elf
LINKER_FILE	= ./gr-sakura.ld
BUILDDIR	= build

CC		= $(TOOLCHAIN)-gcc
CP		= $(TOOLCHAIN)-objcopy
SIZE	= $(TOOLCHAIN)-size

CFLAGS	+= -O0 -ffunction-sections -fdata-sections
LFLAGS	= -Wl,--gc-sections
CPFLAGS	= -Obinary

SRC		= $(wildcard src/*.c)
OBJ		= $(SRC:%.c=%.o)

.PHONY: clean install
#### Rules ####
all: $(TARGET).bin

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(TARGET).elf: $(OBJ)
	$(CC) -T $(LINKER_FILE) $(LFLAGS) $(CFLAGS) -o $(TARGET).elf $(OBJ)

$(TARGET).bin: $(TARGET).elf
	$(CP) $(CPFLAGS) $(TARGET).elf $(TARGET).bin
	$(SIZE) $(TARGET).elf

install: $(TARGET).elf
	cp $(TARGET).bin /media/GR-SAKURA/
	pumount /media/GR-SAKURA

clean:
	rm -f *.elf *.bin src/*.o
