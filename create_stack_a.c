/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_stack_a.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/30 21:18:58 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/15 10:00:25 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


//to avoid overflow, I use long
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
//duplicate checker in stack, to be tested
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

void	create_stack_a(t_node **a, char **args)
{
	long num;
	int i;
    t_node *node;
    i = 0;
    *a = NULL;
    while (args[i])
    {
		num = ft_atol(args[i]);
		if (num > INT_MAX || num < INT_MIN)
			free_split(args); // free everything
            //honestly I should make an error exit for both these cases
            //should free stack, args and exit
		if(check_duplicate(*a,(int)num))
		    free_split(args); // free everything, error exit again
        node = new_node((int)num);
            if(!node)
                //error exit
        //and here I should have  a function call to add to 
        //the back of the stack
            i++;
    }
}