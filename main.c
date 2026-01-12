/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/12 19:59:09 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//currently the pipeline is
//main.c calls manage input from the "input parcer.c"
//manage input calls valid checkec(only checks if it's a digit)
//main then also calls check duplicates
//maybe I should combine is valid with the duplicate checker or rename 
//is valid
int	main(int argc, char **argv)
{
	int i;
	char **args;

	i = 0;
	if (argc < 2)
		return (0);
	args = manage_input(argc, argv);
	if (!args)
		return (1);
	// here add the duplicate check call
	if (check_duplicate(args) == 0)
	{
		while (args[i])
		{
			ft_printf("args[%d] = %s\n", i, args[i]);
			i++;
		}

		if (argc == 2)
			free_split(args);
		return (0);
	}
	return (1);
}