NAME	= push_swap

CC		= gcc $(CFLAGS)
CFLAGS 	= -Wall -Wextra -Werror -I $(INC_DIR)

RM 		= rm -f

INC_DIR = includes/

SRC 	= push_swap.c

OBJ 	= $(addprefix srcs/, $(SRC:.c=.o))

LIBFT_DIR 	= libft/
LIBFT_LIB	= libft/libft.a

all 	: $(NAME)

$(NAME) : push libft
		$(CC) $(OBJ)


push	:
	$(CC) $(LIBFT_LIB) $(addprefix srcs/, $(SRC)) -o $(addprefix srcs/, $(SRC:.c=.o))

libft	: 
		make -C $(LIBFT_DIR) all

clean 	:
		$(RM) $(OBJ)
		make -C $(LIBFT_DIR) clean

fclean 	: clean
		$(RM) $(NAME)
		make -C $(LIBFT_DIR) fclean

re 		: fclean all

.PHONY : all clean fclean libft push re
