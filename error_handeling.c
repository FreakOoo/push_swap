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

void	free_stack(t_node **stack)
{
	t_node *tmp;
  if(!stack || !*stack)
      return;
	while (*stack)
	{
    tmp = (*stack)->next;
    free(*stack);
    *stack = tmp;
	}
}

void	ft_error(t_node **stack, char **args)
{
	if (args)
		free_split(args);

  free_stack(stack);

  write(2,"Error\n",6);
  exit(EXIT_FAILURE);
 //need to check if exit failure is a permitted macro
  //otherwise I can make the return type int and return 1
}
