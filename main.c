/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/30 18:55:52 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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