/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cost.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/03 20:36:12 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/04 18:23:09 by mchopin       ########   odam.nl         */
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
	t_node *tmp;
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