NAME = ft_display_file

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
