/*
** makemusic.c for musictimebb in /home/peau_c/rendu/Lib/gfx_wolf3d
**
** Made by
** Login   <peau_c@epitech.net>
**
** Started on  Tue Dec 22 23:11:49 2015
** Last update Sun Dec 27 21:46:30 2015 
*/

#include "../include/struct.h"

void	setmusic(t_data *data)
{
  data->music.main[0].main = bunny_load_music("music/theme.ogg");
  data->music.main[1].main = bunny_load_music("music/ultime.ogg");
  data->music.main[2].main = bunny_load_music("music/wolf.ogg");
  data->music.main[3].main = bunny_load_music("music/hitler.ogg");
  data->music.main[4].main = bunny_load_music("music/tp.ogg");
  data->music.easter = bunny_load_music("music/easter.ogg");
  data->music.tp = bunny_load_music("music/tp.ogg");
  bunny_sound_play(data->music.main[0].main);
}
