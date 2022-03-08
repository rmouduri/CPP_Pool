SRCS		=	main.cpp

OBJS_SRCS	=	$(SRCS:.cpp=.o)

%.o:			%.cpp ./*.hpp
				${CC} ${CFLAGS} ${INCLUDES} -c $< -o ${<:.cpp=.o}

NAME		=	Array

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

CC			=	c++ #-g -fsanitize=address

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
