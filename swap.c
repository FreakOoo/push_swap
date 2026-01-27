/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 15:37:02 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/27 20:56:17 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a)
{
	t_node	*tmp_top;
	t_node	*tmp_sec;

	if ((*a) == NULL || (*a)->next == NULL || a == NULL)
		return ;
	tmp_top = *a;
	tmp_sec = (*a)->next;
	tmp_top->next = tmp_sec->next;
	tmp_sec->next = tmp_top;
	*a = tmp_sec;
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	sa(b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	sa(a);
	sa(b);
	write(1, "ss\n", 3);
}
