# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mchopin <mchopin@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2025/12/22 21:43:57 by mchopin       #+#    #+#                  #
#    Updated: 2026/01/21 16:50:49 by mchopin       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS= -Wall -Werror -Wextra -g
CC= cc
LIBFT_DIR = libft
LIBFT  = $(LIBFT_DIR)/libft.a
PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a 


SRCS=	input_parcer.c \
free_split.c \
create_stack_a.c \
error_handeling.c \
swap.c \
rotate.c \
main.c


OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)  $(LIBFT) $(PRINTF)
	$(CC) $(FLAGS) $(OBJ) $(PRINTF) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)
	@echo "======= LIBRARY CREATED ======"

%.o: %.c
	$(CC)	$(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean
	@echo "==== library object files removed ======"
        
fclean: clean

	rm -f $(NAME)
	$(MAKE) -C  $(LIBFT_DIR) fclean
	$(MAKE) -C  $(PRINTF_DIR) fclean
	@echo "===== libftprintf.a removed ======"
	
re: fclean all
.PHONY: all clean fclean re


