/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   turksort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 13:57:43 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/28 19:13:17 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// currently this segfaults, I'll have to figure out why...
// so now it properly pushes to B enough times
// but then it segfaults
#include "push_swap.h"

void	turk_sort(t_node **a, t_node **b)
{
	t_node *eyes;
	eyes = *a;

	//now this works for small sort
	//currently checking if A is sorted, which it is
	//but b is not checked for sorting
	//and not sorted 
	while (stack_len(*a) > 3)
	{
		pb(a, b);
		if (eyes)
			eyes = eyes->next;
	}
	small_sort(a);
}