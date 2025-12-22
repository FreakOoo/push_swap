/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/15 17:16:38 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/31 14:39:31 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// this code came out of pure insanity. perhaps inspect

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	i = 0;
	if (len_d >= size)
	{
		return (size + len_s);
	}
	while (src[i] && (len_d + i < size - 1))
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}

//#include <bsd/string.h>

// I think my function works but once we added up the two strings, the character
// number can't add up past that, the original function does
// any size that is smaller than lens + lend works correctly

// int	main(void)
// {
// char		balls[] = "helpme";
// const char	please[] = "please";

// ft_strlcat(balls, please, 3);
// printf("%s\n %d", balls, i);
// // printf("%zu \n", ft_strlcat(balls, please, 18));
// // printf("%zu \n", strlcat(balls, please, 18));
// }
