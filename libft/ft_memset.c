/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 18:56:15 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/31 14:49:52 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *vptr, int c, size_t len)
{
	while (len > 0)
	{
		*((unsigned char *)vptr + len - 1) = (unsigned char)c;
		len--;
	}
	return (vptr);
}

// I still find it hard to understand why we turn the int into
// an unsigned character rather than initializing it like that originally

// the spot in memory we pick is being replaced by the c variable
// starting from the end and decrementing

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[56992];

// 	ft_memset(str, 'A', 5);
// 	printf("%s", str);
// }
