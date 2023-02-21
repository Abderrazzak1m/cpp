NAME = ex02

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = Bureaucrat.hpp AForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp
SRC = main.cpp Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp

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