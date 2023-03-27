NAME = Bureaucrate

SRCS = 	./sources/main.cpp 	\
		./sources/bureaucrat.cpp \
		./sources/error.cpp \
		./sources/form.cpp \
		./sources/ShrubberyCreationForm.cpp \
		./sources/RobotomyRequestForm.cpp \
		./sources/PresidentialPardonForm.cpp \
		./sources/intern.cpp

		

HEADER = 	./includes/error.hpp \
			./includes/bureaucrat.hpp \
			./includes/form.hpp \
			./includes/ShrubberyCreationForm.hpp \
			./includes/RobotomyRequestForm.hpp \
			./includes/PresidentialPardonForm.hpp \
			./includes/intern.hpp


OBJS = ${SRCS:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

%.o: %.cpp Makefile $(HEADER)
		${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
		${CC} $(FLAGS) -o $@ $^

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all