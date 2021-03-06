#include <stdio.h>
#include <stdlib.h>
#include "pixlutter.h"

int
main(int argc, char *argv[])
{
  PixlutterWindow *window;

  if (argc != 2) {
    fprintf(stderr, "%s\n%s\n",
            "ArgumentError: must be an argument.",
            "Usage: make && ./pixlutter FILE");
    return 1;
  }

  window = pixlutter_window_new(argv[1]);
  pixlutter_window_main(window, &argc, &argv);

  return 0;
}
