/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/27 20:49:31 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// for some reason small sort doesn't seem to trigger here

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

	// int		i;
	a = NULL;
	b = NULL;
	args = manage_input(argc, argv);
	if (!args)
		ft_error(&a, args);
	create_stack_a(&a, args);
	ft_printf("\n### stack A and B created ### \n\n");
	print_stack(a, 'a');
	print_stack(b, 'b');
	if (is_sorted(a) == 0)
		ft_printf("\n### this shit is not sorted ###\n\n");
	else if (is_sorted(a) == 1)
		ft_printf("\n### nicely sorted ###\n\n ");
	else
		ft_printf("\n### didn't bother checking if sorted ### \n\n");
	ft_printf("\n✰✰✰ I'M GONNA SOOOORT ✰✰✰ \n\n");
	small_sort(&a);
	ft_printf("\n");
	print_stack(a, 'a');
	print_stack(b, 'b');
	// ft_printf("\n swapping A : \n");
	// sa(&a);
	// print_stack(a, 'a');
	// ft_printf("\n swapping A : \n");
	// sa(&a);
	// print_stack(a, 'a');
	// i = 0;
	// while (i < 7)
	// {
	// 	ft_printf("\n rotating A : \n");
	// 	ra(&a);
	// 	print_stack(a, 'a');
	// 	i++;
	// }
	// i = 0;
	// while (i < 5)
	// {
	// 	ft_printf("\n pushing from A to  B : \n");
	// 	pb(&a, &b);
	// 	print_stack(a, 'a');
	// 	ft_printf("\n \n");
	// 	print_stack(b, 'b');
	// 	i++;
	// }
	// i = 0;
	// while (i <= 2)
	// {
	// 	ft_printf("\n rotating B : \n");
	// 	rb(&b);
	// 	print_stack(a, 'a');
	// 	ft_printf("\n \n");
	// 	print_stack(b, 'b');
	// 	i++;
	// }
	// ft_printf("\n swapping B : \n");
	// sb(&b);
	// print_stack(b, 'b');
	// ft_printf("\n Pushing B to A : \n");
	// pa(&b, &a);
	// print_stack(b, 'b');
	// ft_printf("\n");
	// print_stack(a, 'a');
	// ft_printf("\n SS : \n");
	// ss(&a, &b);
	// print_stack(b, 'b');
	// ft_printf("\n");
	// print_stack(a, 'a');
	// ft_printf("\n RR : \n");
	// rr(&a, &b);
	// print_stack(b, 'b');
	// ft_printf("\n");
	// print_stack(a, 'a');
	// ft_printf("\n reverse rotate a  : \n");
	// rra(&a);
	// print_stack(a, 'a');
	// ft_printf("\n");
	// ft_printf("\n reverse rotate B  : \n");
	// rrb(&b);
	// print_stack(b, 'b');
	// ft_printf("\n");
	// print_stack(a, 'a');
	// ft_printf("\n reverse rotate a and b  : \n");
	// rrr(&a, &b);
	// print_stack(b, 'b');
	// ft_printf("\n");
	// print_stack(a, 'a');
	if (is_sorted(a) == 0)
		ft_printf("\n\n### this shit is not sorted###");
	else if (is_sorted(a) == 1)
		ft_printf("\n\n### nicely sorted### ");
	else
		ft_printf("\n\n### didn't bother checking if sorted###");
	free_split(args);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
