/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/04 18:34:32 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//hello chud of the future, the stacks sort now 
//however is is very ineficient, it only rotates or reverse rotates a 
//never B 
//and also never both it looks like. 
//could be something with cost calculation
//you must find the answer. 
//all the debug print statements are commented out but mostly still there for you.


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
	// ft_printf("\n### stack A and B created ### \n\n");
	// print_stack(a, b);
	// sorting
	// ft_printf("\n✰✰✰ I'M GONNA SOOOORT ✰✰✰ \n\n");
  while(stack_len(a) > 3)
    pb(&a,&b);
  small_sort(&a);
  // ft_printf("\n\ndid small sort\n");

	// ft_printf("\n going to turk out \n");
  turk_sort(&a, &b);
	// ft_printf("\n turked out, finished now\n");
	// print_stack(a, b);
	// if (is_sorted(a) == 0)
	// 	ft_printf("\n\n### this shit is not sorted###\n");
	// else if (is_sorted(a) == 1)
	// 	ft_printf("\n\n### nicely sorted### \n");
	// else
	// 	ft_printf("\n\n### didn't bother checking if sorted###\n");
  // ft_printf("\nFinal check \n");
	// print_stack(a, b);
	// free all
	free_split(args);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
