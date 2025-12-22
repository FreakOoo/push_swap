/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 13:46:34 by mchopin       #+#    #+#                 */
/*   Updated: 2025/10/13 13:46:17 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// #include <unistd.h>
// #include <ctype.h>
// int main(void)
// {
//     printf("%d \n", ft_isalnum(5));
//     printf("%d \n", ft_isalnum(0));
//     printf("%d \n", ft_isalnum(9));
//     printf("%d \n", ft_isalnum('q'));
//     printf("%d \n", ft_isalnum('+'));
//     printf("%d \n", ft_isalnum('\t'));

//     printf("%s \n", "==============================================");

//     printf("%d \n", isalnum(5));
//     printf("%d \n", isalnum(0));
//     printf("%d \n", isalnum(9));
//     printf("%d \n", isalnum('q'));
//     printf("%d \n", isalnum('+'));
//     printf("%d \n", isalnum('\t'));
// }