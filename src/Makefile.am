bin_PROGRAMS = pixlutter

LDFLAGS = -Wall -g -no-undefined
CFLAGS  = -Wall -g $(CLUTTER_CFLAGS)
LIBS    = $(CLUTTER_LIBS)

pixlutter_SOURCES = pixlutter.c

DEFAULT_INCLUDES = \
	-I$(top_srcdir)/include

pixlutter_LDADD = \
	$(top_builddir)/lib/libpixlutter.la
