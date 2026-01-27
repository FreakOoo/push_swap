/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_stacks.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/30 21:18:58 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/20 17:45:59 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	append_stack(t_node **stack, t_node *new_node)
{
	t_node	*tmp;

	if (!stack || !new_node)
		return ;
	if (*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	tmp = *stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
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

void	create_stack_a(t_node **a, char **args)
{
	long	num;
	int		i;
	t_node	*node;

	i = 0;
	*a = NULL;
	while (args[i])
	{
		num = ft_atol(args[i]);
		if (num > INT_MAX || num < INT_MIN)
			ft_error(a, args);
		if (check_duplicate(*a, (int)num))
			ft_error(a, args);
		node = new_node((int)num);
		if (!node)
			ft_error(a, args);
		append_stack(a, node);
		i++;
	}
}
