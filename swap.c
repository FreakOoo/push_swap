/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 15:37:02 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/24 15:50:26 by mchopin       ########   odam.nl         */
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
}
void	sb(t_node **b)
{
	sa(b);
}
void	ss(t_node **a, t_node **b)
{
	sa(a);
	sa(b);
}
