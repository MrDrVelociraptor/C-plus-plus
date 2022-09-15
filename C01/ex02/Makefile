NAME = ref

SRC = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
		
$(NAME): $(OBJ)
		@clear
		@c++ $(FLAGS) $(SRC) -o $(NAME)


clean:
		@clear
		@rm -f $(OBJ)
		@echo "Half clean"

fclean:
		@clear
		@rm -f $(NAME)
		@echo "All gone"

re: fclean all
