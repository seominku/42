NAME 	= 	push_swap
CC		= 	cc
CFLAG	= 	-Wextra -Werror -Wall
RM		=	-rm
HEADER	=	deque.h\
			push_swap.h

SRC		= 	deque.c\
			init_number.c\
			init_number_utils.c\
			utils.c		\
			swap.c		\
			main.c

OBJS		=	$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAG) -o $@ $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
