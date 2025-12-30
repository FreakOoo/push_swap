/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_duplicate.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/30 17:33:08 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/30 18:53:25 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(char **args)
{
	int i;
	int j;
	int a;
	int b;
	i = 0;
	while (args[i])
	{
		a = ft_atoi(args[i]);
		j = i + 1;
		while (args[j])
		{
			b = ft_atoi(args[j]);
			if (a == b)
			{
				ft_printf("ERROR, duplicates in input");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}