/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parcer.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/17 17:17:52 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/27 21:04:43 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// manage input is now clean but I took out the duplicate checker
// I'll do that once I'm building the stack
// (allegedly easier to do with linked list)

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

char	**dup_argv(char **argv)
{
	int		len;
	int		j;
	char	**duplicate;

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
