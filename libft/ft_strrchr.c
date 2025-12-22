/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 12:15:46 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/31 19:06:09 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s", (char *)ft_strrchr("ultramegasuperskibidi ", 's'));
// 	printf("%s", (char *)strrchr("\n ultramegasuperskibidi \n", 's'));
// 	return (0);
// }