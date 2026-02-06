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

//last things I did was add the print cost lines
//into the print stack function
//it seems that the costs never get initialized, hence
//the stack rotations never trigger
//next step is to find out why the costs don't get set_index
//
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
	//
	// now the vision is
	// set_index(a);
	// set_index(b);
	// set_target(a,b);
	// calcost_b(b)
	// calcost(a,b)

	// sorting
	ft_printf("\n✰✰✰ I'M GONNA SOOOORT ✰✰✰ \n\n");
  set_index(a);
  set_index(b);
  have_crush(a,b);
  calcost_b(b);
  calcost_a(a,b);
  while(stack_len(a) > 3)
    pb(&a,&b);
  small_sort(&a);
  ft_printf("\n\ndid small sort\n");

	ft_printf("\n going to turk out \n");
  turk_sort(&a, &b);
	ft_printf("\n turked out \n");
	print_stack(a, b);
	// check if small sort worked
	if (is_sorted(a) == 0)
		ft_printf("\n\n### this shit is not sorted###");
	else if (is_sorted(a) == 1)
		ft_printf("\n\n### nicely sorted### ");
	else
		ft_printf("\n\n### didn't bother checking if sorted###");



  ft_printf("\nlast check just to be sure \n\n");
	print_stack(a, b);
	// free all
	free_split(args);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
