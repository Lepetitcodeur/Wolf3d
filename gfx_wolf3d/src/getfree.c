/*
** getfree.c for free in /home/peau_c/rendu/Lib/gfx_wolf3d
**
** Made by
** Login   <peau_c@epitech.net>
**
** Started on  Sat Dec 26 12:29:05 2015
** Last update Sun Dec 27 21:44:08 2015 
*/

#include "../include/struct.h"

int	lets_free(t_data *data)
{
  int	i;

  i = 0;
  while (i < WIDTH - 1)
    free(LABI[i++]);
  i = 0;
  while (i <= 4)
    bunny_delete_sound(data->music.main[i++].main);
  bunny_delete_sound(data->music.easter);
  bunny_delete_sound(data->music.tp);
  free(LABI);
  bunny_delete_clipable(&data->pixel->clipable);
  /* bunny_stop(data->window); */
  return (1);
}
