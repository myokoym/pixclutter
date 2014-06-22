#include <cutter.h>
#include <window.h>

void test_new_window(void);

static PixlutterWindow *window;

void
cut_setup(void)
{
  window = NULL;
}

void
cut_teardown(void)
{
  if (window) {
    pixlutter_window_free(window);
  }
}

void
test_new_window(void)
{
  char *filepath = "fixtures/butaface.png";

  window = pixlutter_window_new(filepath);
  cut_assert(window);
}
