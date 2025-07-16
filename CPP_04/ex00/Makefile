CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17
VAL = valgrind --leak-check=full --track-origins=yes
SRC = main.cpp src/Animal.cpp src/Cat.cpp src/Dog.cpp src/WrongAnimal.cpp src/WrongCat.cpp
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
NAME = $(notdir $(CURDIR))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[32m🚀 Program is ready to execute\033[0m"

$(OBJ_DIR)/%.o: %.cpp
	@mkdir	-p	$(dir $@)
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "\033[31mObject files removed\033[0m"

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)
	@echo "\033[31mProgram removed\033[0m"

re: fclean all

valgrind: $(NAME)
	$(VAL) ./$(NAME)

.PHONY: all clean fclean re valgrind