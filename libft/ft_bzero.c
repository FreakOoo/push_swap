/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 18:10:44 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/13 22:57:45 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *str, size_t size)
{
	int		i;
	char	*char_str;

	i = 0;
	char_str = (char *)str;
	while (size > 0)
	{
		*(char_str++) = '\0';
		size--;
	}
}

// int	main(void)
// {
// 	char str[10] = "123656";
// 	ft_bzero(str, 5);
// 	printf("%s", str);
// }
