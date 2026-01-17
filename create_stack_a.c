/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_stack_a.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/30 21:18:58 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/15 12:12:39 by mchopin       ########   odam.nl         */
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
//need to look up why this compares to all previous

void append_stack(t_node * stack, int x)
{
  if(stack == NULL)
    return;
  t_node * new_node = malloc(sizeof(t_node));
  new_node->value = x;
  while()

        //to be finished, then put at the end of create stack a 
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
//untested but looks relatively safe
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
			ft_error(a,args); // free everything
		if(check_duplicate(*a,(int)num))
		    ft_error(a,args); // free everything
    node = new_node((int)num);
    if(!node)
      ft_error(a,args);
        //and here I should have  a function call to add to 
        //the back of the stack
            i++;
    }
}
