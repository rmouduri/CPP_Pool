SRCS		=	main.cpp	\
				Karen.cpp

OBJS_SRCS	=	$(SRCS:.c=.o)

.c.o:
				${CC} ${CFLAGS} -c ${INCLUDES} $< -o ${<:.cpp=.o}

INCLUDES	=	-I.

NAME		=	Karen

CFLAGS      =   -Wall -Werror -Wextra -std=c++98

CC			=	c++

RM			=	rm -f

${NAME}:		${OBJS_SRCS}
				${CC} -o ${NAME} ${SRCS} ${CFLAGS} ${INCLUDES}

all:			${NAME}

clean:
				find . -type f \( -name "*~" -o -name "#*#" -o -name "*.o" -o -name "*.gch" \) -delete

fclean:			clean
				${RM} ${NAME}

re:				fclean all

mv_objs:		find . -type f -name "*.o" -exec mv -ft objs {} +

.PHONY:			all clean fclean re
