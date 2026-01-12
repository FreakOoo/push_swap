/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parcer.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/17 17:17:52 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/12 21:15:44 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// now gotta check for duplicates

#include "push_swap.h"

int	check_input_type(char *s)
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
// handle with and without quotations and run is valid

// i should probably check input type and duplicates in here
// and not in main
char	**manage_input(int argc, char **argv)
{
	char	**args;
	int		i;

	if (argc < 2)
		return (NULL);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		// apparently this can be just args ft_strdup_argv	but I don't have that func
		// might make it to shorten this function
		args = &argv[1];
	if (!args || !args[0])
		return (NULL);
	i = 0;
	while (args[i] != NULL)
	{
		if (!check_input_type(args[i]))
		{
			if (argc == 2)
				free_split(args), NULL;
			ft_printf("%s\n", "ERROR, invalid input");
			return (NULL);
		}
		i++;
	}
	return (args);
}
// check for duplicates
int	check_duplicate(char **args)
{
	int	i;
	int	j;
	int	a;
	int	b;

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
// this function converts input to int and
// make sure everything is good
int	all_good(int argc, char **argv)
{

	//this function still needs a lot of work, might change name to all_good_makin_stack
	char	**args;
	//int		i;
	//long	value;

	args = manage_input(argc, argv);
	if (!args)
		return (0);
	if (check_duplicate(args) == 1 || check_input_type(args) == 0)
		return (0);
	// now I exit if it's 1 [error] or I stay,
		//convert the input from char to an int array , then linked list,
		//or in one go linked list of ints
	// either way, now I should know the input is safe,
		//I turn it into integers and the correct data structure to make my stack A.
	return (1);
}
