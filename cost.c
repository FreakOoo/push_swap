/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cost.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/03 20:36:12 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/04 22:59:55 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calcost_b(t_node *b)
{
	t_node	*tmp;

	tmp = b;
	while (tmp)
	{
		if ((tmp)->above_median)
			(tmp)->cost_b = (tmp)->index;
		else
			(tmp)->cost_b = (tmp)->index - stack_len(b);
		tmp = tmp->next;
	}
}

void	calcost_a(t_node *a, t_node *b)
{
	t_node	*tmp;

	tmp = b;
	while (tmp)
	{
		if (tmp->target->above_median)
			tmp->cost_a = tmp->target->index;
		else
			tmp->cost_a = (tmp->target->index) - stack_len(a);
		tmp = tmp->next;
	}
}
int	ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}
void	total_cost(t_node *b)
{
	t_node	*tmp;

	tmp = b;
	while (tmp)
	{
		tmp->total_cost = ft_abs(tmp->cost_b) + ft_abs(tmp->cost_a);
		tmp = tmp->next;
	}
}
t_node	*cheapest_node(t_node **a)
{
	t_node	*tmp;
	t_node	*cheapest;

	tmp = *a;
	cheapest = tmp;
	while (tmp)
	{
		if ((tmp->total_cost) < cheapest->total_cost)
			cheapest = tmp;
		tmp = tmp->next;
	}
	return (cheapest);
}

