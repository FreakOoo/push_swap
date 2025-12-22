# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mchopin <mchopin@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2025/10/30 20:37:34 by mchopin       #+#    #+#                  #
#    Updated: 2025/11/05 20:06:37 by mchopin       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra -g
CC = cc

SRCS = ft_isprint.c \
	   ft_putendl_fd.c \
	   ft_strlcat.c \
	   ft_substr.c \
	   ft_atoi.c \
	   ft_itoa.c \
	   ft_putnbr_fd.c \
	   ft_strlcpy.c \
	   ft_tolower.c \
	   ft_bzero.c \
	   ft_memchr.c \
	   ft_putstr_fd.c \
	   ft_strlen.c \
	   ft_toupper.c \
	   ft_calloc.c \
	   ft_memcmp.c \
	   ft_split.c \
	   ft_strmapi.c \
	   ft_isalnum.c \
	   ft_memcpy.c \
	   ft_strchr.c \
	   ft_strncmp.c \
	   ft_isalpha.c \
	   ft_memmove.c \
	   ft_strdup.c \
	   ft_strnstr.c \
	   ft_isascii.c \
	   ft_memset.c \
	   ft_striteri.c \
	   ft_strrchr.c \
	   ft_isdigit.c \
	   ft_putchar_fd.c \
	   ft_strjoin.c \
	   ft_putchar_fd.c \
	   ft_putnbr_fd.c \
	   ft_putstr_fd.c \
	   ft_substr.c \
	   ft_strdup.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strmapi.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_putendl_fd.c \
	   ft_strtrim.c


OBJ= $(SRCS:.c=.o)

all: $(NAME)

 $(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "######## library created ########"
	
%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "###### library object files removed ######"
	
fclean: clean
	@rm -f $(NAME)
	@echo "######## libft.a removed ########"
re: fclean all
.PHONY: all clean fclean r

