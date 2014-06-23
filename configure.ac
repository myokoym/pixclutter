AC_PREREQ(2.59)

AC_INIT(pixlutter, 0.0.1, myokoym@gmail.com)
AC_CONFIG_AUX_DIR([config])
AC_CONFIG_HEADER([src/config.h])

AM_INIT_AUTOMAKE($PACKAGE_NAME, $PACKAGE_VERSION)

AC_PROG_LIBTOOL

m4_ifdef([AC_CHECK_CUTTER], [AC_CHECK_CUTTER], [ac_cv_use_cutter="no"])
AM_CONDITIONAL([WITH_CUTTER], [test "$ac_cv_use_cutter" != "no"])

m4_ifdef([AC_CHECK_COVERAGE], [AC_CHECK_COVERAGE])

AC_CONFIG_FILES([Makefile
                 lib/Makefile
                 test/Makefile])

AC_OUTPUT
