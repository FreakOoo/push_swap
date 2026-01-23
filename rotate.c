/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 16:42:01 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/23 20:11:23 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
}
void	rb(t_node **b)
{
	ra(b);
}