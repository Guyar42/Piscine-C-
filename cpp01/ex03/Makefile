NAME = UslessViolence

SRCS = 	./sources/HumanA.cpp \
		./sources/HumanB.cpp \
		./sources/Weapon.cpp \
		./sources/main.cpp


HEADER = ./includes/HumanA.h \
		./includes/HumanB.h \
		./includes/Weapon.h

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