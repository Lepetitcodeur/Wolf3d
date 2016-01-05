/*
** struct.h for struct in /home/peau_c/rendu/LibLapin/gfx_fdf1
**
** Made by clement peau
** Login   <peau_c@epitech.net>
**
** Started on  Thu Nov 19 10:23:46 2015 clement peau
** Last update Sun Dec 27 21:59:58 2015 
*/

#ifndef MY_STRUCT
# define MY_STRUCT

# include <unistd.h>
# include "lapin.h"
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# define MIDDLE ((((double)PA_WIDTH / 2) - 500) / (double)PA_WIDTH)
# define LABI	data->map.labi
# define ANGLE	data->map.angle
# define BGF	(char *)bunny_ini_get_field
# define WIDTH	data->map.width
# define HEIGHT	data->map.height
# define COORD	data->map.pos_player
# define PA_WIDTH data->pixel->clipable.clip_width
# define PA_HEIGHT data->pixel->clipable.clip_height
# define VECTOR	data->map.vector
# define VECTOR1 data->map.vector1
# define PLAYER data->map.pos_player
# define TMP data->map.wall

typedef struct		s_map
{
  char			*map_name;
  int			tile_size;
  int			width;
  int			height;
  char			**labi;
  t_bunny_transform	pos_player;
  t_bunny_transform	wall;
  t_bunny_transform	vector;
  t_bunny_transform	vector1;
  t_bunny_transform	tel[6];
  int			i;
  double		angle;
  t_bunny_transform	finish;
}			t_map;

typedef struct		s_main_music
{
  t_bunny_music		*main;
}			t_main_music;

typedef struct		s_music
{
  t_main_music		main[5];
  t_bunny_music		*easter;
  t_bunny_music		*tp;
}			t_music;

typedef struct		s_data
{
  t_bunny_pixelarray	*pixel;
  t_bunny_window	*window;
  t_bunny_ini		*ini;
  t_map			map;
  t_music		music;
}			t_data;

int lets_free(t_data *);
void move_craby_right(t_data *);
void move_craby_left(t_data *);
void move_up(t_data *);
int getnbr(char *);
void fill(t_bunny_pixelarray *);
void prepare(t_bunny_pixelarray *);
int getini(t_data *);
void calc(t_data *);
void tekpixel(t_bunny_pixelarray *, t_bunny_position *, t_color *);
void move_left(t_data *);
void move_down(t_data *);
void move_right(t_data *);
void setmusic(t_data *);
int check_tel(t_data*);
void make_tel(t_data *);
void init_tel(t_data *);
void set_max_heap_size(size_t);
#endif	/* MY_STRUCT  */
