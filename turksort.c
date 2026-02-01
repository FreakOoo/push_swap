/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   turksort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 13:57:43 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/31 01:16:53 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk_sort(t_node **a, t_node **b)
{
	t_node *eyes;
	eyes = *a;

	// push to b until 3 left, then small sort
	while (stack_len(*a) > 3)
	{
		pb(a, b);
		if (eyes)
			eyes = eyes->next;
	}
	small_sort(a);
}