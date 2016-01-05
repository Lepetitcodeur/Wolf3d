/*
** vecnorm.c for vecnorm in /home/peau_c/rendu/Lib/gfx_wolf3d
**
** Made by
** Login   <peau_c@epitech.net>
**
** Started on  Sun Dec 27 12:58:32 2015
** Last update Sun Dec 27 19:16:38 2015 
*/

#include "../include/struct.h"

double		vecnorm(t_bunny_position *coord1, t_bunny_position *coord2)
{
  double	tmp;

  tmp = sqrt(pow((coord2->x - coord1->x), 2) + pow((coord2->y - coord1->y), 2));
  return (tmp);
}
