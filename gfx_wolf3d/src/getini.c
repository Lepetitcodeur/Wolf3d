/*
** getini.c for getini in /home/peau_c/rendu/Lib/gfx_wolf3d
**
** Made by
** Login   <peau_c@epitech.net>
**
** Started on  Sun Dec 20 17:01:51 2015
** Last update Sun Dec 27 16:26:34 2015 
*/

#include "../include/struct.h"

int	getini(t_data *data)
{
  int	i;

  i = -1;
  data->map.tile_size = getnbr(BGF(data->ini, "level1", "tile_size", 0));
  WIDTH = getnbr(BGF(data->ini, "level1", "width", 0));
  HEIGHT = getnbr(BGF(data->ini, "level1", "height", 0));
  if ((LABI = malloc(sizeof(char *) * HEIGHT + 1)) == NULL)
    return (-1);
  while (++i != HEIGHT * (WIDTH + 1))
    {
      if ((LABI[i / WIDTH] = malloc(sizeof(char) * (WIDTH + 1))) == NULL)
	return (-1);
      while (i % (WIDTH + 1) < WIDTH)
	{
	  LABI[i / (WIDTH + 1)][i % (WIDTH + 1)] =
	  48 + getnbr(BGF(data->ini, "level1", "data",
			  (i - ((i - (i / WIDTH)) / WIDTH))));
	  i++;
	}
      LABI[i / (WIDTH + 1)][i % (WIDTH + 1)] = 0;
    }
  COORD.x = 0.5 + getnbr(BGF(data->ini, "level1", "start_position", 0));
  COORD.y = 0.5 + getnbr(BGF(data->ini, "level1", "start_position", 1));
  data->map.angle = getnbr(BGF(data->ini, "level1", "start_position", 2));
  return (1);
}
