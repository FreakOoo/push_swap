/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/13 21:33:31 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int i;
	char **args;

	i = 0;
	args = manage_input(argc, argv);
	if (!args)
	{
		ft_printf("ERROR YOU STUPID DINGUS: silly input");
		return (1);
	}
	while (args[i])
	{
		ft_printf("args[%d] = %s\n", i, args[i]);
		i++;
	}
	free_split(args);
	return (0);
}