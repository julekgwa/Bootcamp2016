# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/15 11:11:28 by julekgwa          #+#    #+#              #
#    Updated: 2016/04/15 11:11:51 by julekgwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

FILE = ./main.c ./ft_read.c ./ft_writeln.c
OBJECT = ./main.o ./ft_read.o ./ft_writeln.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	
$(NAME):
	gcc -c $(FILE)
	gcc $(FLAGS) -o $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)
