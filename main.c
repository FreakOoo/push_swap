/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/21 20:56:05 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		ft_printf("a[%i] = %i\n", i, stack->value);
		stack = stack->next;
		i++;
	}
}

int	main(int argc, char **argv)
{
	// TO TEST MANAGE INPUT

	// int i;
	// char **args;

	// i = 0;
	// args = manage_input(argc, argv);
	// if (!args)
	// {
	// 	ft_printf("ERROR YOU STUPID DINGUS: silly input");
	// 	return (1);
	// }
	// while (args[i])
	// {
	// 	ft_printf("args[%d] = %s\n", i, args[i]);
	// 	i++;
	// }
	// free_split(args);
	// return (0);

	// testing stack

	char **args;
	t_node *a;
	t_node *b;

	a = NULL;
	b = NULL;
	args = manage_input(argc, argv);
	if (!args)
		ft_error(&a, args);
	create_stack_a(&a, args);
	ft_printf("stack A created \n");
	print_stack(a);
	ft_printf("\n swapping a : \n");
	sa(&a);
	print_stack(a);
	ft_printf("\n swapping a : \n");
	sa(&a);
	print_stack(a);
	ft_printf("\n rotating a : \n");
	ra(&a);
	print_stack(a);
	ft_printf("\n rotating a : \n");
	ra(&a);
	print_stack(a);
	
	return (0);
}