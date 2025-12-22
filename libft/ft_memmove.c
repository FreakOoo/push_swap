/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 21:13:11 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/02 18:12:40 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp_dest;
	const char	*tmp_src;

	tmp_dest = (char *)dest;
	tmp_src = (const char *)src;
	if (!dest && !src)
		return (NULL);
	if (tmp_dest > tmp_src)
	{
		while (n--)
			tmp_dest[n] = tmp_src[n];
		return (tmp_dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}

// int	main(void)
// {
// 	char start[5] = "swag";
// 	char dest[] = "chungusballs";
// 	char dest2[] = "chungusballs";
// 	// char end[4];

// 	printf("%s\n", (char *)ft_memmove(dest, start, 4));
// 	printf("%s\n", (char *)memmove(dest2, start, 4));
// 	return (0);
// }