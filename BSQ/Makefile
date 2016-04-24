# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/20 09:49:23 by julekgwa          #+#    #+#              #
#    Updated: 2016/04/21 18:07:55 by julekgwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = ./build_map.c ./main.c ./fill_map.c
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all
