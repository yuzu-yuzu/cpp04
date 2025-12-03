NAME = ON_FIRE

CC = c++ 
CFLAGS = -Wall -Wextra -Werror -g -std=c++98 -g3

#-------------------------- Sources -----------------------------#


SRCS = main.cpp  Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

#----------------------------------------------------------------#

all: $(NAME)
	
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "\033[1;32m✔ Clean effectué\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;32m✔ Fclean effectué\033[0m"

re: fclean all

.PHONY: all clean fclean re