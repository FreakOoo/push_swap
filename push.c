/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/23 19:47:20 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/28 13:56:42 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}

void	pa(t_node **b, t_node **a)
{
  t_node *tmp;

  if(*b == NULL)
    return;
  tmp = *b;
  *b = (*b)->next;
  tmp->next = *a;
  *a = tmp;
	write(1, "pa\n", 3);
}
