NAME = so_long.h
CC = gcc
FLAGS = -g #-Wall -Werror -Wextra -fsanitize=address
SRC = ft_split.c ft_substr.c ft_strlcpy.c ft_strlen.c ft_strdup.c ft_memcpy.c \
		ft_free_s.c main.c get_next_line.c get_next_line_utils.c
HEAD = so_long.h
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(OBJ):
	$(CC) -c $(FLAGS) $(SRC)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@ MLX42/libmlx42.a -ldl -lglfw -lm -pthread -I MLX42/include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: clean fclean re all
