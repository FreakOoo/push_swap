/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parcer.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/17 17:17:52 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/28 19:42:44 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// the last thing I modified was the main here
// after the change the program recognised incorrect input as incorrect
// problem is that it does this after printing the valid ones
// it should instead reprompt for a correct input (I think, check the subject)
#include "push_swap.h"

int	ft_is_valid(char *s)
{
	int	i;

	i = 0;
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

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args || !args[0])
			return (NULL);
		i = 0;
		while (argv[i] != NULL)
		{
			if (!ft_is_valid(args[i]))
			{
				ft_printf("%s", "ERROR, invalid input");
				return (free(args), NULL);
			}
			i++;
		}
		// gotta free args here
		return (args);
	}
	// don't need to free here
	return (&argv[1]);
}

int	main(int argc, char **argv)
{
	int		i;
	char	**args;

	i = 0;
	if (argc < 2)
		return (0);
	args = manage_input(argc, argv);
	if (!args)
		return (1);
	while (args[i])
	{
		if (ft_is_valid(args[i]) == 1)
		{
			ft_printf("args[%d] = %s\n", i, args[i]);
			i++;
		}
		else
		{
			ft_printf("ERROR wrong input type");
			return (1);
		}
	}
	return (0);
}
