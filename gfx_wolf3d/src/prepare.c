/*
** prepare.c for prapae in /home/peau_c/rendu/LibLapin/gfx_fdf1
**
** Made by clement peau
** Login   <peau_c@epitech.net>
**
** Started on  Fri Nov 20 16:50:11 2015 clement peau
** Last update Mon Dec 21 11:23:05 2015 
*/

#include "../include/struct.h"

void	prepare(t_bunny_pixelarray *pix)
{
  pix->clipable.clip_width = 1000;
  pix->clipable.clip_height = 1000;
  fill(pix);
}
