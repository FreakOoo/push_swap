/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 16:42:01 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/27 20:56:51 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//might be bugged and when I RB it would print ra then rb

void	ra(t_node **a)
{
	t_node	*top;
	t_node	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	top = *a;
	*a = top->next;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = top;
	top->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	ra(b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	ra(a);
	ra(b);
	write(1, "rr\n", 3);
}
