SRCS		=	main.cpp	\
				Animal.cpp	\
				Brain.cpp	\
				Cat.cpp	\
				Dog.cpp

OBJS_SRCS	=	$(SRCS:.cpp=.o)

%.o: 			%.cpp
				${CC} ${CFLAGS} ${INCLUDES} -c $<  -o ${<:.cpp=.o}

INCLUDES	=	-I.

NAME		=	Brain

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

CC			=	c++

RM			=	rm -f

${NAME}:		${OBJS_SRCS}
				${CC} -o ${NAME} ${OBJS_SRCS} ${CFLAGS} ${INCLUDES}

all:			${NAME}

clean:
				${RM} ${OBJS_SRCS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
