/*
** calculus.c for calc in /home/peau_c/rendu/Lib/gfx_wolf3d
**
** Made by
** Login   <peau_c@epitech.net>
**
** Started on  Mon Dec 21 10:46:38 2015
** Last update Sun Dec 27 21:49:29 2015 
*/

#include "../include/struct.h"

void		trace(t_data *data, int height, int pos)
{
  t_bunny_position	pose;
  t_color		col;

  if ((LABI[(int)TMP.y][(int)TMP.x]) == '9')
    col.full = YELLOW;
  else
    col.full = WHITE;
  if ((LABI[(int)TMP.y][(int)TMP.x]) == '8')
    col.full = GREEN;
  pose.x = pos;
  pose.y = PA_HEIGHT / 2  - height;
  while (pose.y < ((PA_HEIGHT / 2) + height - 3))
    {
      if ((pose.x * pose.y) < (PA_HEIGHT * PA_WIDTH) && pose.x > 0
	  && pose.y > 0)
	tekpixel(data->pixel, &pose, &col);
      pose.y += 1;
    }
}

void		calc(t_data *data)
{
  double	k;
  int		x;

  x = 0;
  while (x != PA_WIDTH)
    {
      k = 0.000;
      TMP.x = COORD.x + (k * VECTOR1.x);
      TMP.y = COORD.y + (k * VECTOR1.y);
      VECTOR.x = 0.8;
      VECTOR.y = (((double)PA_WIDTH / 2) - (double)x) / (double)PA_WIDTH;
      VECTOR1.x = VECTOR.x * cos(ANGLE) - VECTOR.y * sin(ANGLE);
      VECTOR1.y = VECTOR.x * sin(ANGLE) + VECTOR.y * cos(ANGLE);\
      while ((LABI[(int)TMP.y][(int)TMP.x]) == '0')
	{
	  k += 0.001;
	  TMP.x = COORD.x + (k * VECTOR1.x);
	  TMP.y = COORD.y + (k * VECTOR1.y);
	}
      trace(data, (PA_HEIGHT / (2 * k)), x);
      x++;
    }
}
