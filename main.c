/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/19 22:24:30 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// hello chud of the future, the stacks sort now
// however is is very ineficient, it only rotates or reverse rotates a
// never B
// and also never both it looks like.
// could be something with cost calculation
// you must find the answer.
// all the debug print statements are commented out but mostly still there for you.

int	main(int argc, char **argv)
{
	char	**args;
	t_node	*a;
	t_node	*b;

	// so far this works
	a = NULL;
	b = NULL;
	args = manage_input(argc, argv);
	if (!args)
		ft_error(&a, args);
	create_stack_a(&a, args);
	if (is_sorted(a))
		return (0);
	if (stack_len(a) == 3)
		small_sort(&a);
	if (stack_len(a) == 5)
		sort_five(&a, &b);
	if (is_sorted(a))
		return (0);
	radix(&a, &b, 0);
	free_split(args);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
