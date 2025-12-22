# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mchopin <mchopin@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2025/11/11 17:40:28 by mchopin       #+#    #+#                  #
#    Updated: 2025/11/22 03:03:40 by mchopin       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra -g
CC = cc

SRCS = 	ft_putchar_intret.c \
		ft_strlen.c \
		ft_putstr_intret.c \
		ft_putnum_intret.c \
		ft_putnum_again.c \
		ft_printf.c

OBJ= $(SRCS:.c=.o)

all: $(NAME)

 $(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "######## library created ########"
	
c:
	$(CC) $(FLAGS) $(SRCS)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "###### library object files removed ######"
	
fclean: clean
	@rm -f $(NAME)
	@echo "######## libftprintf.a removed ########"
re: fclean all
.PHONY: all clean fclean r