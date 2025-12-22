/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/10 19:44:15 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/13 22:36:54 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
		return (c);
}

// int	main(void)
// {
// 	printf("%d \n", ft_tolower('a'));
// 	printf("%d \n", ft_tolower('A'));
// }

// fix main, it's stupid, I need to pass
// an array of uppercase letters, that I define in main
// then it will work "allegedly";
