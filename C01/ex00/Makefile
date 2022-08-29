NAME = zom

SRC = Zombie.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
		
$(NAME): $(OBJ)
		@clear
		@echo "Brainz"
		@c++ $(FLAGS) $(SRC) -o $(NAME)
		@echo "The dead are rising"

clean:
		@clear
		@rm -f $(OBJ)
		@echo "Half clean"

fclean:
		@clear
		@rm -f $(NAME)
		@echo "All gone"

re: fclean all
