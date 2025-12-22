/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 18:31:22 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/31 18:30:07 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*strptr;

	ch = (unsigned char)c;
	strptr = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		if (strptr[i] == ch)
			return (strptr + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s", (char *)ft_memchr("ultramegasuperskibidi", 's', 11));
// }