/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   turksort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 13:57:43 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/04 23:25:53 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Wanted to rotate both when possible
//then rotate individually
//hard part is passing the changes made to the others stack

void	double_rotation_choice(t_node **a, t_node **b, t_node *cheapest)
{
	cheapest = cheapest_node(b);
	{
		while (cheapest->cost_a > 0 && cheapest->cost_b > 0)
		{
			rr(a, b);
			cheapest->cost_a--;
			cheapest->cost_b--;
		}
		while (cheapest->cost_a < 0 && cheapest->cost_b < 0)
		{
			rrr(a, b);
			cheapest->cost_a++;
			cheapest->cost_b++;
		}
	}
}

void	rotation_single(t_node **a)
{
	t_node	*cheapest;

	cheapest = cheapest_node(a);
	while (cheapest->cost_a > 0 && cheapest->cost_b > 0)
	{
		ra(a);
		cheapest->cost_a--;
		cheapest->cost_b--;
	}
	while (cheapest->cost_a < 0 && cheapest->cost_b < 0)
	{
		rra(a);
		cheapest->cost_a++;
		cheapest->cost_b++;
	}
}


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