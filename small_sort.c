/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 17:31:51 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/20 19:42:50 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// need index
// need to calculate value to find best fit
// bring best fit to top
// make stack actions write their name whenever they are used

// make small sort

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

void	small_sort(t_node **a)
{
	t_node	*top;
	t_node	*last;

	top = *a;
	last = *a;
	while (last->next)
		last = last->next;
	while (last->next && !is_sorted(*a))
		last = last->next;
	if ((top->value) > (last->value) && (top->value) > (top->next->value))
	{
		ra(a);
		if (!is_sorted(*a))
			sa(a);
	}
	else if ((top->value) > (last->value) && (top->value) < (top->next->value))
		rra(a);
	else if ((top->value) < top->next->value && top->next->value > last->value)
	{
		sa(a);
		ra(a);
	}
	else
		sa(a);
}

void	sort_five(t_node **a, t_node **b)
{
	t_node	*tmp;
	t_node	*smallest;

	tmp = *a;
	smallest = find_smallest(*a);
	while (*a != smallest)
		ra(a);
	pb(a, b);
	smallest = find_smallest(*a);
	while (*a != smallest)
		ra(a);
	pb(a, b);
	small_sort(a);
	pa(b, a);
	pa(b, a);
}
