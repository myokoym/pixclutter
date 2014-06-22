#ifndef __PIXLUTTER_WINDOW_H__
#define __PIXLUTTER_WINDOW_H__

typedef struct _PixlutterWindow PixlutterWindow;

PixlutterWindow *pixlutter_window_new(char *filepath);
void pixlutter_window_free(PixlutterWindow *window);
void pixlutter_window_main(PixlutterWindow *window, int *argc, char **argv[]);

#endif /* __PIXLUTTER_WINDOW_H__ */
