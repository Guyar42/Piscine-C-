NAME = Polymorphisme

SRCS = 	./sources/main.cpp 	\
		./sources/animal.cpp \
		./sources/dog.cpp \
		./sources/cat.cpp \
		./sources/brain.cpp
		

HEADER = 	./includes/animal.hpp \
			./includes/dog.hpp \
			./includes/cat.hpp \
			./includes/brain.hpp

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