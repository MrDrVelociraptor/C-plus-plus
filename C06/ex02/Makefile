NAME = Base5000

SRC = Base.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98 -I.

all: $(NAME)
		
$(NAME):
		@clear
		@echo "loading"
		c++ $(FLAGS) $(SRC) -o $(NAME)
		@echo "Loaded"

fclean:
		@clear
		@rm -f $(NAME)
		@echo "All gone"

re: fclean all
