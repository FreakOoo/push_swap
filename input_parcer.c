/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parcer.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/17 17:17:52 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/22 21:52:52 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**manage_input(int argc, char **argv)
{
	char	**args;

	if (argc == 2)
	{
		// import libft for split
		// also makefile
		args = ft_split(argv[1], '	');
		if (!args || !args[0])
		{
			// if (args)
			// free(args);
			// shouldn't have to free here I think
			return (NULL);
		}
		// gotta free args here
		return (args);
	}
	// don't need to free here
	return (&argv[1]);
}

int	main(int argc, char **argv)
{
	char **args;
	if (argc < 2)
		return (0);
	args = manage_input(argc, argv);
	if (!args)
		return (1);
	return (0);
}