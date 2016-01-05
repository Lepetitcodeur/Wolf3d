/*
** move_up.c for moveup in /home/peau_c/rendu/Lib/gfx_wolf3d
**
** Made by
** Login   <peau_c@epitech.net>
**
** Started on  Mon Dec 21 17:22:21 2015
** Last update Sun Dec 27 19:43:45 2015 
*/

#include "../include/struct.h"

void	move_down(t_data *data)
{
  double	tmpx;
  double	tmpy;

  tmpx = (cos(ANGLE) * 0.4);
  tmpy = (sin(ANGLE) * 0.4);
  if (LABI[(int)(COORD.y - tmpy - 0.1)][(int)(COORD.x - tmpx - 0.1)] != '1')
   {
     COORD.x -= (tmpx * 0.4);
     COORD.y -= (tmpy * 0.4);
    }
  else if (LABI[(int)(COORD.y - tmpy - 0.1)][(int)COORD.x] != '1')
      COORD.y -= tmpy * 0.4;
  else if (LABI[(int)(COORD.y)][(int)(COORD.x - tmpx - 0.1)] != '1')
      COORD.x -= tmpx * 0.4;
}

void	move_up(t_data *data)
{
  double	tmpx;
  double	tmpy;

  tmpx = (cos(ANGLE) * 0.4);
  tmpy = (sin(ANGLE) * 0.4);
  if (LABI[(int)(COORD.y + tmpy + 0.1)][(int)(COORD.x + tmpx + 0.1)] != '1')
    {
      COORD.x = COORD.x + (cos(ANGLE) * 0.2);
      COORD.y = COORD.y + (sin(ANGLE) * 0.2);
    }
  else if (LABI[(int)COORD.y][(int)(COORD.x + tmpx + 0.1)] != '1')
      COORD.x += (tmpx * 0.2);
  else if (LABI[(int)(COORD.y + tmpy + 0.1)][(int)COORD.x] != '1')
      COORD.y += (tmpy * 0.2);
}

void	move_left(t_data *data)
{
  ANGLE += 0.15;
}

void	move_right(t_data *data)
{
  ANGLE -= 0.15;
}
