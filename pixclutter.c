#include <stdio.h>
#include <stdlib.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <clutter/clutter.h>

int
main(int argc, char *argv[])
{
  ClutterActor *stage, *box, *text;
  ClutterContent *image;
  GdkPixbuf *pixbuf;

  if (argc != 2) {
    fprintf(stderr, "%s\n%s\n",
            "ArgumentError: must be an argument.",
            "Usage: make && ./mireclutter FILE");
    return 1;
  }

  if (clutter_init(&argc, &argv) != CLUTTER_INIT_SUCCESS) {
    return 1;
  }

  stage = clutter_stage_new();
  clutter_actor_set_name(stage, "Stage");
  clutter_stage_set_title(CLUTTER_STAGE(stage), "Content Box");
  clutter_stage_set_user_resizable(CLUTTER_STAGE(stage), TRUE);
  g_signal_connect(stage, "destroy", G_CALLBACK(clutter_main_quit), NULL);
  clutter_actor_show(stage);

  box = clutter_actor_new();
  clutter_actor_set_name(box, "Image");
  clutter_actor_add_constraint(box, clutter_bind_constraint_new(stage, CLUTTER_BIND_SIZE, 0.0));
  clutter_actor_add_child(stage, box);

  pixbuf = gdk_pixbuf_new_from_file(argv[1], NULL);
  image = clutter_image_new();
  clutter_image_set_data(CLUTTER_IMAGE(image),
                         gdk_pixbuf_get_pixels(pixbuf),
                         gdk_pixbuf_get_has_alpha(pixbuf)
                           ? COGL_PIXEL_FORMAT_RGBA_8888
                           : COGL_PIXEL_FORMAT_RGB_888,
                         gdk_pixbuf_get_width(pixbuf),
                         gdk_pixbuf_get_height(pixbuf),
                         gdk_pixbuf_get_rowstride(pixbuf),
                         NULL);
  g_object_unref(pixbuf);

  clutter_actor_set_content_scaling_filters(box,
                                            CLUTTER_SCALING_FILTER_TRILINEAR,
                                            CLUTTER_SCALING_FILTER_LINEAR);
  clutter_actor_set_content(box, image);
  g_object_unref(image);

  clutter_main();

  return 0;
}
