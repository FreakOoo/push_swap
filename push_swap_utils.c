/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/13 18:03:15 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/13 20:51:41 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**dup_argv(char **argv)
{
	int len;
	int j;
	char **duplicate;

	len = 0;
	while (argv[len])
		len++;
	duplicate = malloc(sizeof(char *) * (len + 1));
	if (!duplicate)
		return (NULL);
	j = 0;
	while (j < len)
	{
		duplicate[j] = ft_strdup(argv[j]);
		if (!duplicate[j])
		{
			free_split(duplicate);
			return (NULL);
		}
		j++;
	}
	duplicate[j] = NULL;
	return (duplicate);
}