/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/23 20:15:52 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node *stack, char name)
{
	int	i;

	i = 0;
	while (stack)
	{
		ft_printf("%c[%i] = %i\n", name, i, stack->value);
		stack = stack->next;
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	**args;
	t_node	*a;
	t_node	*b;
	int		i;

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
	a = NULL;
	b = NULL;
	args = manage_input(argc, argv);
	if (!args)
		ft_error(&a, args);
	create_stack_a(&a, args);
	ft_printf("stack A created \n");
	print_stack(a, 'a');
	ft_printf("\n swapping A : \n");
	sa(&a);
	print_stack(a, 'a');
	ft_printf("\n swapping A : \n");
	sa(&a);
	print_stack(a, 'a');
	i = 0;
	while (i < 7)
	{
		ft_printf("\n rotating A : \n");
		ra(&a);
		print_stack(a, 'a');
		i++;
	}
	i = 0;
	while (i < 7)
	{
		ft_printf("\n pushing from A to  B : \n");
		pb(&a, &b);
		print_stack(a, 'a');
		ft_printf("\n \n");
		print_stack(b, 'b');
		i++;
	}
	i = 0;
	while (i <= 2)
	{
		ft_printf("\n rotating B : \n");
		rb(&b);
		print_stack(a, 'a');
		ft_printf("\n \n");
		print_stack(b, 'b');
		i++;
	}
	free_split(args);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
