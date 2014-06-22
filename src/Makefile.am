lib_LTLIBRARIES = libpixlutter.la

LDFLAGS = -Wall -g -no-undefined
CFLAGS  = -Wall -g $(shell pkg-config --cflags clutter-1.0)
LIBS    = $(shell pkg-config --libs clutter-1.0)

AUTOMAKE_OPTIONS = subdir-objects
libpixlutter_la_SOURCES = pixlutter.c pixlutter/window.c
