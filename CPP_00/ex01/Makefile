CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17
VAL = valgrind --leak-check=full --track-origins=yes
SRC = phonebook.cpp
NAME = phonebook

all: $(NAME)

$(NAME):
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

valgrind: $(NAME)
	$(VAL) ./$(NAME)

.PHONY: all clean fclean re valgrind