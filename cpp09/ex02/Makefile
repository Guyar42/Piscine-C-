NAME = PmergeMe

SRCS = 	./sources/main.cpp \
		./sources/ft.cpp \
		./sources/error.cpp \
		./sources/myDeque.cpp \
		./sources/myVector.cpp

HEADER = ./includes/ft.hpp \
		./includes/error.hpp \
		./includes/myDeque.hpp \
		./includes/myVector.hpp


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