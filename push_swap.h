/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/22 21:18:37 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/19 22:23:48 by mchopin       ########   odam.nl         */
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

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

char				**manage_input(int argc, char **argv);
int					ft_error(t_node **stack, char **args);
void				free_split(char **s);
int					main(int argc, char **argv);
int					check_duplicate(t_node *stack, int value);
int					check_input_type(char *s);
char				**dup_argv(char **argv);
void				free_stack(t_node **stack);
long				ft_atol(const char *str);
void				append_stack(t_node **stack, t_node *a);
t_node				*new_node(int value);
void				create_stack_a(t_node **a, char **args);
void				print_stack(t_node *a, t_node *b);
// actions _____________
void				sa(t_node **a);
void				sb(t_node **b);
void				ra(t_node **a);
void				rb(t_node **b);
void				pa(t_node **b, t_node **a);
void				pb(t_node **a, t_node **b);
void				ss(t_node **a, t_node **b);
void				rr(t_node **a, t_node **b);
void				rra(t_node **a);
void				rrb(t_node **b);
void				rrr(t_node **a, t_node **b);
// utilities (useful outside of push swap) _______
int					stack_len(t_node *a);
t_node				*find_smallest(t_node *a);
// sorting _____________________

void				set_index(t_node *a);
int					is_sorted(t_node *a);
void				small_sort(t_node **a);
void				sort_five(t_node **a, t_node **b);
void				radix(t_node **a, t_node **b, int shift);
#endif
