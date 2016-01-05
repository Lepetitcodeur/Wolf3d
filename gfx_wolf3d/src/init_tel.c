/*
** init_tel.c for init tel in /home/peau_c/rendu/Lib/gfx_wolf3d
**
** Made by
** Login   <peau_c@epitech.net>
**
** Started on  Thu Dec 24 10:32:25 2015
** Last update Sun Dec 27 21:37:53 2015 
*/

#include "../include/struct.h"

void	init_tel(t_data *data)
{
  int	i;
  int	c;

  i = 0;
  c = getnbr(BGF(data->ini, "level1", "teleport", 0));
  data->map.i = 0;
  while (i < c)
    {
      data->map.tel[i].x = getnbr(BGF(data->ini, "level1", "teleport_posx", i));
      data->map.tel[i].y = getnbr(BGF(data->ini, "level1", "teleport_posy", i));
      i++;
    }
  data->map.finish.x = getnbr(BGF(data->ini, "level1", "victory", 0));
  data->map.finish.y = getnbr(BGF(data->ini, "level1", "victory", 1));
}
