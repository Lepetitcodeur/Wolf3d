/*
** go.c for go in /home/peau_c/rendu/Lib/gfx_wolf3d
**
** Made by
** Login   <peau_c@epitech.net>
**
** Started on  Sun Dec 27 19:17:25 2015
** Last update Sun Dec 27 21:28:14 2015 
*/

#include "../include/struct.h"

void	go(t_bunny_position *cur_pos, double angle,
	   t_bunny_position *newpos, int move)
{
  newpos->x = cur_pos->x + cos(angle) * move;
  newpos->y = cur_pos->y + sin(angle) * move;
}
