##
## Makefile for  in /home/peau_c/rendu/Lib/gfx_wolf3d
##
## Made by
## Login   <peau_c@epitech.net>
##
## Started on  Sun Dec 20 16:11:08 2015
## Last update Sun Dec 27 13:19:39 2015 
##

SRC=	src/main.c \
	src/prepare.c \
	src/fill.c \
	src/my_getnbr.c \
	src/getini.c \
	src/calculus.c \
	src/tekpixel.c \
	src/move.c \
	src/makemusic.c \
	src/checktp.c \
	src/init_tel.c \
	src/getfree.c \

OBJ=	$(SRC:.c=.o)

CC=	gcc -g -o $(NAME) -L ~/.froot/lib -lm

CFLAGS=	-W -Wall -Werror -ansi -pedantic -Wextra

CMD=	-llapin -lsfml-audio -lsfml-graphics -lsfml-window
CMD+=	-lsfml-system -lstdc++ -ldl

NAME=	wolf3d

$(NAME):	$(OBJ)
		$(CC) $(OBJ) $(CMD)

all:		$(NAME)

clean:
		rm $(OBJ)

fclean:		clean
		rm $(NAME)

re:		fclean all
