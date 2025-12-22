/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 20:22:41 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/31 18:15:03 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && (i < n))
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
		{
			return ((unsigned char)str1[i] - ((unsigned char)str2[i]));
		}
		i++;
	}
	return (0);
}

// in case this doesn't pass, explicitely make it print -1
// when the value should be negative,
// currently it just gives a positive, negative or zero.

// #include <string.h>

// int	main(void)
// {
// 	printf("%d \n", ft_strncmp("cahickibam", "chickibamaaa", 7));
// 	printf("%d \n", ft_strncmp("chickibam", "boomam", 5));
// 	printf("%d \n", strncmp("cahickibam", "chickibamaaa", 7));
// 	printf("%d \n", strncmp("chickibam", "boomam", 5));
// }