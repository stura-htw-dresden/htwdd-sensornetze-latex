CONTIKI_PROJECT = hellosworld
CONTIKI_SOURCEFILES += io_access.c usb.c
TARGET = avr-atmega128rfa1


all: $(CONTIKI_PROJECT)

program: $(CONTIKI_PROJECT).$(TARGET).u
.PHONY: program

CONTIKI = ../..
include $(CONTIKI)/Makefile.include
