NAME = ClapTrap

SRCS = 	./sources/main.cpp 			\
		./sources/ClapTrap.cpp 	\
		./sources/FragTrap.cpp


HEADER = 	./includes/ClapTrap.h \
			./includes/FragTrap.h

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