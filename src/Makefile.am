lib_LTLIBRARIES = libpixlutter.la

LDFLAGS = -Wall -g -no-undefined
CFLAGS  = -Wall -g $(shell pkg-config --cflags clutter-1.0)
LIBS    = $(shell pkg-config --libs clutter-1.0)

libpixlutter_la_SOURCES = pixlutter.c window.c
