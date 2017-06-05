# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awyart <awyart@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/28 22:10:59 by awyart            #+#    #+#              #
#    Updated: 2017/06/05 14:38:12 by awyart           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = fractol
GRAPH = -framework OpenGL -framework AppKit
FLAGS = -Werror -Wall -Wextra
SRC1 = main.c\
		img.c \
		init.c\
	

SRC2 = ft_putstr.c \
	

SRC3 = julia.c \

SRC4 = mandelbrot.c \

SRC5 = lianpounov.c \

SRC6 = evexit.c \
		evzoom.c \
		setcolor.c\

SRC = $(SRC1) \
	  $(patsubst %,utility/%,$(SRC2)) \
	  $(patsubst %,Julia/%,$(SRC3)) \
	  $(patsubst %,Mandelbrot/%,$(SRC4))\
	  $(patsubst %,Liapounov/%,$(SRC5)) \
	  $(patsubst %,event/%,$(SRC6))

IPATH = includes
VPATH = srcs

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(FLAGS) -o $(NAME) $^ libmlx.a -I $(IPATH) $(GRAPH)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean $(NAME)
