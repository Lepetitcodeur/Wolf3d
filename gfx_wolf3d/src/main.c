/*
** main.c for main in /home/peau_c/rendu/LibLapin/gfx_fdf1
**
** Made by clement peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Nov 19 10:13:25 2015 clement peau
** Last update Sun Dec 27 22:03:47 2015 
*/

#include "../include/struct.h"

void			movement(t_bunny_keysym key, t_data *data)
{
  if (key == BKS_LEFT)
    move_left(data);
  if (key == BKS_RIGHT)
    move_right(data);
  if (key == BKS_Z)
    move_up(data);
  if (key == BKS_S)
    move_down(data);
}

t_bunny_response	escape(t_bunny_event_state state,
			       t_bunny_keysym key,
			       t_data *data)
{
  if (key == BKS_ESCAPE && (lets_free(data) == 1))
    return (EXIT_ON_SUCCESS);
  if (state == GO_DOWN)
    {
      if (key == BKS_P)
	{
	  bunny_sound_stop(data->music.main[data->map.i / 2].main);
	  bunny_sound_stop(data->music.easter);
	}
      if (key == BKS_O)
	bunny_sound_play(data->music.main[data->map.i / 2].main);
      if (key == BKS_V)
	bunny_sound_play(data->music.easter);
      movement(key, data);
    }
  return (GO_ON);
}

int			splited_main(t_data *data)
{
  prepare(data->pixel);
  if (check_tel(data) == -1)
    return (0);
  calc(data);
  return (1);
}

t_bunny_response       	mainloop(t_data *data)
{
  if (splited_main(data) == 0)
    return (0);
  bunny_blit(&data->window->buffer, &data->pixel->clipable, NULL);
  bunny_display(data->window);
  return (GO_ON);
}

int			main(int ac, char **av)
{
  t_data		data;

  if (ac < 2)
    return (0);
  if ((data.ini = bunny_load_ini(av[1])) == 0)
    return (0);
  data.window = bunny_start(1000, 1000, false, "test");
  data.pixel = bunny_new_pixelarray(1000, 1000);
  getini(&data);
  setmusic(&data);
  init_tel(&data);
  bunny_set_loop_main_function((t_bunny_loop)mainloop);
  bunny_set_key_response((t_bunny_key)&escape);
  if (bunny_loop(data.window, 60, &data) == 0)
    return (0);
  return (1);
}
