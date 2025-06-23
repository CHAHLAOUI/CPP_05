CC		= c++
NAME	= Intern
HEADS	= AForm.hpp Bureaucrat.hpp Intern.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp 
SRCS	= AForm.cpp Bureaucrat.cpp Form.cpp Intern.cpp main.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp 
OBJS	= $(SRCS:.cpp=.o)
CFLAGS	= -Wall -Werror -Wextra -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o		: %.cpp $(HEADS)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all 

.PHONY	: clean