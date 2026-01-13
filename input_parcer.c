/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parcer.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/17 17:17:52 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/13 21:24:28 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// I removed some logic from manage input to clean up
// the error messages won't be different now, it'll only be error a
// and handled elsewhere
#include "push_swap.h"

int	check_input_type(char *s)
{
	int	i;

	i = 0;
	if (!s || !*s)
		return (0);
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
char	**manage_input(int argc, char **argv)
{
	char	**args;
	int		i;

	if (argc < 2)
		return (NULL);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = dup_argv(&argv[1]);
	if (!args || !args[0])
		return (NULL);
	i = 0;
	while (args[i])
	{
		if (!check_input_type(args[i]))
		{
			free_split(args);
			return (NULL);
		}
		i++;
	}
	return (args);
}
