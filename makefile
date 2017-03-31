CFLAGS=-O -Wall -Werror

CFILES	:= $(wildcard *.c)
OFILES	:= $(patsubst %.c,%.o,$(CFILES))
TARGETS	:= softest

.PHONY: all clean

all: $(TARGETS)

softest: sof.c sof.h softest.c
	$(CC) $(CFLAGS) -c sof.c 
	$(CC) $(CFLAGS) sof.o softest.c -o softest

sof.pdf: sof.tex
	latexmk -pdf sof

clean:
	$(RM) $(OFILES) $(TARGETS)
	latexmk -C sof
