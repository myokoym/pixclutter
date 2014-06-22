PROGRAM = pixlutter
OBJS    = pixlutter.o window.o
CC      = gcc
CFLAGS  += -Wall -g $(shell pkg-config --cflags clutter-1.0)
LDFLAGS += -Wall -g
LIBS    += $(shell pkg-config --libs clutter-1.0)

$(PROGRAM): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LDFLAGS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) -c $<
