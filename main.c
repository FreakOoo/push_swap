/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/28 17:36:40 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/28 18:17:34 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//my old manage input can be used as the boilerplate for main

// char	**manage_input(int argc, char **argv)
// {
// 	char	**args;
// 	int		i;

// 	if (argc == 2)
// 	{
// 		args = ft_split(argv[1], ' ');
// 		if (!args || !args[0])
// 		{
// 			return (NULL);
// 		}
// 		i = 0;
// 		while (argv[i] != NULL)
// 		{
// 			if (!ft_is_valid(args[i]))
// 			{
// 				ft_printf("%s", "ERROR, invalid input");
// 				return (free(args), NULL);
// 			}
// 			i++;
// 		}
// 		// gotta free args here
// 		return (args);
// 	}
// 	// don't need to free here
// 	return (&argv[1]);
// }