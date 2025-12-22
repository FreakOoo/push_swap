/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/05 16:24:40 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/05 17:23:55 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	if (n >= 0 && n <= 9)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	longus;

	longus = (long)n;
	len = n_len(longus);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (longus < 0)
	{
		str[0] = '-';
		longus *= -1;
	}
	if (longus == 0)
		*str = (0 + '0');
	while (longus > 0)
	{
		str[len--] = (longus % 10) + '0';
		longus /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	int myboy;
// 	myboy = -11234600;

// 	printf("%s", ft_itoa(myboy));
// }