NAME = is_brain

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = Weapon.hpp HumanA.hpp HumanB.hpp
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRC:.cpp=.o)
all : $(NAME)
%.o : %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(INC)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME)

clean : 
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY : re clean fclean