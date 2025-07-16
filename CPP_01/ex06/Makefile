CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17
VAL = valgrind --leak-check=full --track-origins=yes
SRC = main.cpp Harl.cpp
NAME = harlFilter

all: $(NAME)

$(NAME):
	@$(CC) $(CPPFLAGS) -o $(NAME) $(SRC)
	@echo "\033[32m🚀 Program is ready to execute\033[0m"

clean:
	@rm -f $(NAME)
	@echo "\033[31mProgram removed\033[0m"

fclean: clean

re: fclean all

valgrind: $(NAME)
	$(VAL) ./$(NAME)

.PHONY: all clean fclean re valgrind