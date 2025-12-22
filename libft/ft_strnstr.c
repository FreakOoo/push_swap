/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/15 14:43:32 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/02 17:20:55 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] && len > i)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (big[i + j]) && ((i + j) < len))
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <bsd/string.h>

// int	main(void)
// {
// 	const char mega[] = "military grade small baby";
// 	char tiny[] = "small";

// 	printf("%s \n", ft_strnstr(mega, tiny, 19));
// 	// printf("%s \n ", strnstr(mega, tiny, 19));
// }