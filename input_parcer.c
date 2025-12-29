/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parcer.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/17 17:17:52 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/29 22:02:20 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// now gotta check for duplicates
// #include "push_swap.h"

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
		args = ft_split(argv[1], ' ');
	else
		args = &argv[1];
	if (!args || !args[0])
		return (NULL);
	i = 0;
	while (args[i] != NULL)
	{
		if (!ft_is_valid(args[i]))
		{
			if (argc == 2)
				free_split(args);
			ft_printf("%s\n", "ERROR, invalid input");
			return (NULL);
		}
		i++;
	}
	return (args);
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
		ft_printf("args[%d] = %s\n", i, args[i]);
		i++;
	}
	if (argc == 2)
		free_split(args);
	return (0);
}
