/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/20 19:45:22 by mchopin       ########   odam.nl         */
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
	create_stack_a(&a, args);
	set_index(a);
	if (is_sorted(a))
	{
		free_split(args);
		free_stack(&a);
		return (0);
	}
	if (stack_len(a) == 3)
		small_sort(&a);
	if (stack_len(a) == 5)
		sort_five(&a, &b);
	if (!is_sorted(a))
		radix(&a, &b, 0);
	free_split(args);
	free_stack(&a);
}
