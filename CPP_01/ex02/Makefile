CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
VAL = valgrind --leak-check=full --track-origins=yes
SRC = main.cpp
NAME = $(notdir $(CURDIR))

all: $(NAME)

$(NAME):
	@$(CC) $(CPPFLAGS) -o $(NAME) $(SRC)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

valgrind: $(NAME)
	$(VAL) ./$(NAME)

.PHONY: all clean fclean re valgrind