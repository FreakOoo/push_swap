/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/28 19:04:11 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**args;
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	args = manage_input(argc, argv);
	if (!args)
		ft_error(&a, args);
	// create stack
	create_stack_a(&a, args);
	ft_printf("\n### stack A and B created ### \n\n");
	print_stack(a, b);
	// check if sorted
	if (is_sorted(a) == 0)
		ft_printf("\n### this shit is not sorted ###\n\n");
	else if (is_sorted(a) == 1)
		ft_printf("\n### nicely sorted ###\n\n ");
	else
		ft_printf("\n### didn't bother checking if sorted ### \n\n");
	// sorting
	ft_printf("\n✰✰✰ I'M GONNA SOOOORT ✰✰✰ \n\n");
	
	turk_sort(&a, &b);
	ft_printf("\n");
	print_stack(a, b);
	// check if small sort worked
	if (is_sorted(a) == 0)
		ft_printf("\n\n### this shit is not sorted###");
	else if (is_sorted(a) == 1)
		ft_printf("\n\n### nicely sorted### ");
	else
		ft_printf("\n\n### didn't bother checking if sorted###");
	// free all
	free_split(args);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
