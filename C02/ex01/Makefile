NAME = fix

SRC = Fixed.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
		
$(NAME): $(OBJ)
		@clear
		@echo "loading"
		@c++ $(FLAGS) $(SRC) -o $(NAME)
		@echo "Loaded"

clean:
		@clear
		@rm -f $(OBJ)
		@echo "Half clean"

fclean:
		@clear
		@rm -f $(NAME)
		@echo "All gone"

re: fclean all
