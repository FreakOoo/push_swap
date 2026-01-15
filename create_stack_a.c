/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_stack_a.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/30 21:18:58 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/15 09:54:29 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// unknown if atol works, unknown if the small node creator function works
// I want to atol the numbers to avoid overflow with big numbers
// the the helper is to make new nodes easier in the init of stack a

long	ft_atol(const char *str)
{
	int		sign;
	long	multiply;

	sign = 1;
	multiply = 0;
	while (*str == ' ' || ((*str >= 9) && (*str <= 13)))
		str++;
	if ((*str == '-') || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && (*str >= 48 && *str <= 57))
	{
		multiply = multiply * 10 + (*str - 48);
		str++;
	}
	return (multiply * sign);
}
int	check_duplicate(t_node *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}
// helper to create node
t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}
// check if the prototype here works

void	create_stack_a(t_node *a, char **args)
{
	long num;
	int i;
	i = 0;
	while (args[i])
	{
		// perhaps check duplicates in here
		// LOGIC
		// turn arguments to ints, then if they are messed up or duplicate
		// free
		// otherwise append them as a node.
		num = ft_atol(args[i]);
		if (num > INT_MAX || num < INT_MIN)
			free_split(args); // free everything
		// if(duplicate)
		//     {
		//     free_split(args); // free everything
		//     }
	}
}