/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_utils.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/24 19:19:36 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/24 19:30:50 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// was working on this last
#include "push_swap.h"

int	is_sorted(t_node **a)
{
	t_node *tmp;
	tmp = *a;
	while (tmp->next != NULL)
	{
		if (tmp > tmp->next)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}