NAME = Btc

SRCS = 	./sources/main.cpp 	\
		./sources/data.cpp	\
		./sources/input.cpp \
		./sources/ft.cpp
		

HEADER = 	./includes/data.hpp \
			./includes/input.hpp \
			./includse/ft.hpp

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