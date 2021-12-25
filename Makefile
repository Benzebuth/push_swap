NAME	= push_swap

CC		= gcc $(CFLAGS)
CFLAGS 	= -Wall -Wextra -Werror -I$(INC_DIR) -g

RM 		= rm -f

INC_DIR = includes/

SRC 	= push_swap.c \
		  ps_list.c \
		  ps_tools.c \
		  ps_extract.c \
		  ps_stack_control.c

OBJ 	= $(addprefix srcs/, $(SRC:.c=.o))

LIBFT_DIR 	= libft/
LIBFT_LIB	= libft/libft.a

all 	: $(NAME)

$(NAME) : libft $(OBJ)
		$(CC) $(LIBFT_LIB) $(OBJ) -o $@

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
