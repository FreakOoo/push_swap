/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 16:23:11 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/09 18:48:15 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// this is all the printable characters

// #include <unistd.h>
// #include <ctype.h>

// int main(void)
// {
//     printf("%d \n",ft_isprint(' '));
//     printf("%d \n",ft_isprint('~'));
//     printf("%d \n",ft_isprint(128));

//     printf("%d \n",isprint(' '));
//     printf("%d \n",isprint('~'));
//     printf("%d \n",isprint(128));
// }