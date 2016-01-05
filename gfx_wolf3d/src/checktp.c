/*
** checktp.c for tp in /home/peau_c/rendu/Lib/gfx_wolf3d
**
** Made by
** Login   <peau_c@epitech.net>
**
** Started on  Wed Dec 23 13:54:41 2015
** Last update Sun Dec 27 22:01:26 2015 
*/

#include "../include/struct.h"

int	check_tel(t_data *data)
{
  if ((int)COORD.x == (int)data->map.finish.x &&
      (int)COORD.y == (int)data->map.finish.y)
    {
      lets_free(data);
      write(1, "You won !\n", 10);
      return (-1);
    }
  if ((int)COORD.x == (int)data->map.tel[data->map.i].x &&
      (int)COORD.y == (int)data->map.tel[data->map.i].y)
    {
      COORD.y = (int)data->map.tel[data->map.i + 1].y + 0.5;
      COORD.x = (int)data->map.tel[data->map.i + 1].x + 0.5;
      bunny_sound_stop(data->music.main[data->map.i / 2].main);
      bunny_sound_stop(data->music.easter);
      bunny_sound_play(data->music.main[data->map.i / 2 + 1].main);
      data->map.i += 2;
      bunny_sound_play(data->music.tp);
    }
  return (1);
}
