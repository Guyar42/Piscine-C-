NAME = Base

SRCS = 	sources/A.cpp \
		sources/B.cpp \
		sources/C.cpp \
		sources/Base.cpp \
		sources/main.cpp

HEADER = includes/A.hpp \
		includes/B.hpp \
		includes/C.hpp \
		includes/Base.hpp


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