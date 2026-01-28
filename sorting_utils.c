/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_utils.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/24 19:19:36 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/28 19:00:59 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// was working on this last
#include "push_swap.h"

int	is_sorted(t_node *a)
{
	t_node	*tmp;

	tmp = a;
	while (tmp->next != NULL)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
void	print_stack(t_node *stack, char name)
{
	int	i;

	i = 0;
	while (stack)
	{
		ft_printf("%c[%i] = %i\n", name, i, stack->value);
		stack = stack->next;
		i++;
	}
}

int	stack_len(t_node *a)
{
	t_node	*eyes;
	int		i;

	eyes = a;
	i = 1;
	while (eyes && eyes->next)
	{
		eyes = eyes->next;
		i++;
	}
	return (i);
}
