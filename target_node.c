/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   target_node.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/30 23:27:54 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/31 00:14:36 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_smallest(t_node *a)
{
	t_node	*smallest;

	if (!a)
		return (NULL);
	smallest = a;
	while (a)
	{
		if (a->value < smallest->value)
			smallest = a;
		a = a->next;
	}
	return (smallest);
}
t_node	*find_smallest_bigger(t_node *a, int b_value)
{
	t_node	*my_beloved;

	my_beloved = NULL;
	while (a)
	{
		if (a->value > b_value)
		{
			if (!my_beloved || a->value < my_beloved->value)
				my_beloved = a;
		}
		a = a->next;
	}
	return (my_beloved);
}
void	smallest_bigger(t_node **a, t_node **b)
{
	t_node	*my_beloved;

	if (!*a || !*b)
		return ;
	my_beloved = find_smallest_bigger(*a, (*b)->value);
	if (!my_beloved)
		my_beloved = find_smallest(*a);
	if (my_beloved->above_median)
	{
		while (*a != my_beloved)
			ra(a);
	}
	else
	{
		while (*a != my_beloved)
			rra(a);
	}
	pa(a, b);
}
// also need to compare to median, calculate median
// and index
// need to figure out wether to use ra or rra

void	set_index(t_node *a)
{
	int	i;
	int	median;

	i = 0;
	median = stack_len(a) / 2;
	while (a)
	{
		a->index = i;
		a->above_median = (i <= median);
		a = a->next;
		i++;
	}
}

//this is where I left off, still need to test.
