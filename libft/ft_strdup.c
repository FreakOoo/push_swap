/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/02 17:33:43 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/03 13:47:45 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// made these edge cases but not needed according to francinette
// if (!s)
// 	return (0);
// if (s == NULL)
// 	return (NULL);

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len);
	dup[len] = '\0';
	return (dup);
}

// //at some point I have to free my memory
// int	main(void)
// {
// 	const char	*s = "hello world";

// 	printf("%s", ft_strdup(s));
// }
