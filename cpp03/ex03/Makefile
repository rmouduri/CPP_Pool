SRCS		=	main.cpp	\
				ClapTrap.cpp	\
				ScavTrap.cpp	\
				FragTrap.cpp	\
				DiamondTrap.cpp

OBJS_SRCS	=	$(SRCS:.cpp=.o)

.c.o:
				${CC} ${CFLAGS} -c ${INCLUDES} $< -o ${<:.cpp=.o}

INCLUDES	=	-I.

NAME		=	DiamondTrap

CFLAGS      =   -Wall -Werror -Wextra -std=c++98

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
