NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -I. -g
AR = ar rcs

SRC_DIR = src
LIBFT_DIR = libft

SRC = $(addprefix $(SRC_DIR)/, ft_printf.c ft_putchar.c \
ft_putnbr_base_hex.c ft_putnbr.c \
ft_putnbr_u.c ft_putstr.c ft_type.c)
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/libft.a $(NAME)
	@$(AR) $(NAME) $(OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

clean:
	@make -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	@make -C $(LIBFT_DIR) clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus