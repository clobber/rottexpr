AUDIOLIB ?= audiolib.a

AR ?= ar
CC ?= gcc
RANLIB ?= ranlib

ARFLAGS ?= rcT

CFLAGS ?= -std=c17 -g -Og
CFLAGS += -Wall -Wextra -Wshadow -Wpedantic
CFLAGS += $(shell sdl2-config --cflags)

OBJS :=
OBJS += fx_man.o
OBJS += dsl.o
OBJS += ll_man.o
OBJS += multivoc.o
OBJS += mv_mix.o
OBJS += mvreverb.o
OBJS += nodpmi.o
OBJS += pitch.o
OBJS += user.o
OBJS += usrhooks.o

$(AUDIOLIB): $(OBJS)
	$(RM) $@
	$(AR) $(ARFLAGS) $@ $^
	$(RANLIB) $@

clean:
	$(RM) $(AUDIOLIB) $(OBJS)
