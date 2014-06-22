ACLOCAL_AMFLAGS = $$ACLOCAL_ARGS

SUBDIRS = src test

LDFLAGS = -Wall -g -no-undefined
CFLAGS  = -Wall -g $(shell pkg-config --cflags clutter-1.0)
LIBS    = $(shell pkg-config --libs clutter-1.0)

AUTOMAKE_OPTIONS = subdir-objects
bin_PROGRAMS = pixlutter
pixlutter_SOURCES = src/pixlutter.c src/window.c
