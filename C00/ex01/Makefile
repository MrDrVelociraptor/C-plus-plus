NAME = phonebook

SRC = Contacts.cpp PhoneBook.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
		
$(NAME): $(OBJ)
		@echo "Who calls people anyway"
		@echo "If this was paper I'd say you're wasting it"
		@c++ $(FLAGS) $(SRC) -o $(NAME)
		@echo "Phonebook engage"

clean:
		@clear
		@rm -f $(OBJ)
		@echo "Half clean"

fclean:
		@rm -f $(NAME)
		@echo "All gone"

re: fclean all
