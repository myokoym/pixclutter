lib_LTLIBRARIES = libpixlutter.la

LDFLAGS = -Wall -g -no-undefined
CFLAGS  = -Wall -g $(CLUTTER_CFLAGS)
LIBS    = $(CLUTTER_LIBS)

libpixlutter_la_SOURCES = window.c window.h

DEFAULT_INCLUDES = \
	-I$(top_builddir)/include \
	-I$(top_builddir)/include/pixlutter
