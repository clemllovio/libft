NAME = libft.a

CC = gcc

FLAG = -Wall -Werror -Wextra

SRC =

all : $(NAME)
$(NAME) :
	$(CC) $(FLAG) -o $(NAME) $(SRC)
clean :
	rm -f *.o
fclean : clean
	rm -f $(NAME)
re : fclean all