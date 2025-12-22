/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 21:43:57 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/31 17:45:32 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// if asked questions about this function, it is cursed,
// it looks this weird because
// I tried so much stuff that would not work for reasons I cannot explain
// the previous output was SSSSSSS and because I iterated the pointer and not i
// it should give the exact same output, but it doesn't and I've had enough.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	i = 0;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	while (n > i)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}

// #include <string.h>

// int	main(void)
// {
// 	char	start[4] = "swag";
// 	char	*end[4];

// 	printf("%s\n", (char *)ft_memcpy(end, start, 4));
// 	printf("%s\n", memcpy(end, start, 4));
// 	return (0);
// }
