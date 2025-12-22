/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 19:28:55 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/31 14:59:56 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
		{
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		}
		i++;
	}
	return (0);
}

// #include <string.h>

// int	main(void)
// {
// 	printf("%d", ft_memcmp("bazinga", "bazinga", 7));
// 	printf("%d \n", ft_memcmp("bazinga", "bazaza", 7));
// 	printf("%d", memcmp("bazinga", "bazinga", 7));
// 	printf("%d \n", memcmp("bazinga", "bazaza", 7));
// 	printf("%d", ft_memcmp("bazinga", "bazinga", 3));
// 	printf("%d \n", ft_memcmp("bazinga", "bazaza", 3));
// 	printf("%d", memcmp("bazinga", "bazinga", 3));
// 	printf("%d", memcmp("bazinga", "bazaza", 3));
// }
