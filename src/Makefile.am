bin_PROGRAMS = pixlutter

LDFLAGS = -Wall -g -no-undefined
CFLAGS  = -Wall -g $($(shell pkg-config --cflags clutter-1.0)
LIBS    = $(shell pkg-config --libs clutter-1.0)

pixlutter_SOURCES = pixlutter.c

DEFAULT_INCLUDES = \
	-I$(top_srcdir)/include

pixlutter_LDADD = \
	$(top_builddir)/lib/libpixlutter.la
