/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 22:44:38 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/02 18:09:37 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while ((n - 1 > i) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

// #include <bsd/string.h>

// int	main(void)
// {
// 	char	src1[] = "skibidishit";

// 	printf("%d", ft_strlcpy(src1, "weirwerewrewrdge", 10));
// 	printf("%zu", strlcpy(src1, "weirwerewrewrdge", 10));
// 	return (0);
// }
