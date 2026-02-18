/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_utils.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/24 19:19:36 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/30 23:55:29 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
void	print_stack(t_node *a, t_node *b)
{
	int	i;

	i = 0;
	while (a || b)
	{
		if (a)
    {
			ft_printf("a[%i] = %d        ", i, a->value);
    }
		else
			ft_printf("                ");
		if (b)
    {
      ft_printf("b[%i] = %d", i, b->value);
    }
		ft_printf("\n");
		if (a)
			a = a->next;
		if (b)
			b = b->next;
		i++;
	}
	ft_printf("\n");
}

int	stack_len(t_node *a)
{
	int	i;

	i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}
