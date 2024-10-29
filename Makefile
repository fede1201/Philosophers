NAME = philo

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCES = ./src/*.c \

all:
	$(CC) $(FLAGS) $(SOURCES) -o $(NAME)

fclean: 
	@rm -rf $(NAME)

re: fclean all