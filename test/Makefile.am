if WITH_CUTTER
TESTS = run-test.sh
TESTS_ENVIRONMENT = NOMAKE=yes CUTTER="$(CUTTER)"

noinst_LTLIBRARIES = test_pixlutter.la
endif

INCLUDES = $(CUTTER_CFLAGS) -I$(top_srcdir)/src
LIBS = $(CUTTER_LIBS) $(top_builddir)/src/libpixlutter.la

LDFLAGS = -module -rpath $(libdir) -avoid-version -no-undefined

test_pixlutter_la_SOURCES = test-window.c

echo-cutter:
	@echo $(CUTTER)
