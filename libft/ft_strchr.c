/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 13:31:31 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/31 18:02:48 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
// 	printf("%s", ft_strchr("play monster hunter 4 ultimate \n", 'u'));
// 	printf("%s", strchr("play monster hunter 4 ultimate \n", 'u'));
// }