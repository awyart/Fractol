# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awyart <awyart@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/28 22:10:59 by awyart            #+#    #+#              #
#    Updated: 2017/06/07 18:18:17 by awyart           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = fractol
GRAPH = -framework OpenGL -framework AppKit
FLAGS = -Werror -Wall -Wextra
SRC1 = main.c\
		img.c \
		init.c\
		err.c\

SRC2 = ft_putstr.c \
		ft_strlen.c

SRC3 = julia.c \

SRC4 = mandelbrot.c \

SRC5 = lianpounov.c \
		newton.c \
		julia3.c\
		alternate.c\
		alternate2.c\

SRC6 = evexit.c \
		evzoom.c\
		iter.c\
		loop.c\
		mouse.c\
		move.c\
		reset.c\
		setcolor.c\
		setup.c
	
SRC7 = burn.c \

SRC = $(SRC1) \
	  $(patsubst %,utility/%,$(SRC2)) \
	  $(patsubst %,Julia/%,$(SRC3)) \
	  $(patsubst %,Mandelbrot/%,$(SRC4))\
	  $(patsubst %,other/%,$(SRC5)) \
	  $(patsubst %,burningship/%,$(SRC7)) \
	  $(patsubst %,event/%,$(SRC6))

IPATH = includes
VPATH = srcs

LIB = /usr/local/lib/libmlx.a

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(FLAGS) -o $(NAME) $^ $(LIB) -I $(IPATH) $(GRAPH)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean $(NAME)
