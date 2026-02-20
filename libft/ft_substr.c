/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/01 21:32:44 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/20 19:38:18 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	substr = malloc(len + 1);
	if (!substr)
		return (0);
	ft_strlcpy(substr, (s + start), len + 1);
	substr[len] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	char str[77] = "hello world";

// 	printf("%s \n", ft_substr(str, 0, 11));
// 	// example, find the length and then malloc if everything is right
// 	// make start + len not increase the len
// 	// to keep start in bound, if it gous out of str it segfaults
// 	// printf("%s \n", ft_substr(str, 10, 7));
// }