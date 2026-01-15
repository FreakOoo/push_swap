/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handeling.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/15 10:04:27 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/15 12:09:24 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// eventually add free split and make ft error decide what message
// to send depending on which one triggers
//still need to finish

int	free_stack(t_node **stack)
{
	int	i;

	i = 0;
	while (stack[i])
	{
		free(stack[i]);
		i++;
	}
}

void	ft_error(t_node **stack, char **args)
{
	int	i;

	i = 0;
	if (args)
		free_split(args);
	if (stack && *stack)
		free_stack(stack);
}
