/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/19 20:31:45 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/19 22:26:00 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_node **a, t_node **b, int shift)
{
	int i;
	int len;
	i = 0;
	len = stack_len(*a);
	if (is_sorted(*a))
		return ;
	while (i < len)
	{
		if ((*a)->value & (1 << shift))
			ra(a);
		else
			pb(a, b);
		i++;
	}
	while (*b)
		pa(b, a);
	radix(a, b, shift + 1);
}