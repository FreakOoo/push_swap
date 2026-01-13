/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/22 21:18:37 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/13 20:34:24 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char				**manage_input(int argc, char **argv);
void				free_split(char **s);
int					main(int argc, char **argv);
int					check_duplicate(char **args);
int					check_input_type(char *s);
char				**dup_argv(char **argv);

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

#endif