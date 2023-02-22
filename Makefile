NAME = push_swap.a

CC = cc -g
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT = ./libft/libft.a

SRCS = 	push_swap_main.c \
		operations/algorithm.c \
		operations/ft_check.c\
		operations/ft_free.c\
		operations/ft_get.c\
		operations/push.c\
		operations/reverse.c\
		operations/rotate.c\
		operations/sort.c\
		operations/swap.c\
		operations/utils.c\

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(LIBFT):
	@$(MAKE) -C ./libft

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o push_swap

clean:
	@$(MAKE) clean -C ./libft
	@$(RM) $(OBJS)

fclean: clean
	@$(MAKE) fclean -C ./libft
	@$(RM) $(NAME) push_swap

re: fclean all