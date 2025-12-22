/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 16:04:25 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/02 18:13:29 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <unistd.h>
// #include <ctype.h>
// int main(void)
// {
//     printf("%d \n", ft_isalpha(5));
//     printf("%d \n", ft_isalpha('b'));
//     printf("%d \n", ft_isalpha(9));
//     printf("%d \n", ft_isalpha('q'));
//     printf("%d \n", ft_isalpha('+'));
//     printf("%d \n", ft_isalpha('\t'));

//     printf("%s \n", "==============================================");

//     printf("%d \n", isalpha(5));
//     printf("%d \n", isalpha('b'));
//     printf("%d \n", isalpha(9));
//     printf("%d \n", isalpha('q'));
//     printf("%d \n", isalpha('+'));
//     printf("%d \n", isalpha('\t'));
// }