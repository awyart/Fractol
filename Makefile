# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awyart <awyart@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/28 22:10:59 by awyart            #+#    #+#              #
#    Updated: 2017/06/02 15:08:36 by awyart           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = fractol
GRAPH = -framework OpenGL -framework AppKit
FLAGS = -Werror -Wall -Wextra
SRC1 = main.c\
		img.c
	

SRC2 = ft_putstr.c \
	

SRC3 = julia.c \

SRC4 = mandelbrot.c \

SRC5 = liapounov.c \

SRC = $(SRC1) \
	  $(patsubst %,utility/%,$(SRC2)) \
	  $(patsubst %,Julia/%,$(SRC3)) \
	  $(patsubst %,Mandelbrot/%,$(SRC4))\
	  $(patsubst %,Liapounov/%,$(SRC5))

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
