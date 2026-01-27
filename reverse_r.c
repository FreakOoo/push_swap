/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_r.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/24 16:11:34 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/27 20:58:21 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **a)
{
	t_node	*last;
	t_node	*tmp;

	if (!a || !*a || !(*a)->next)
		return ;
	last = *a;
	while (last->next->next)
		last = last->next;
	tmp = last;
	last = last->next;
	tmp->next = NULL;
	last->next = *a;
	*a = last;
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	rra(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
