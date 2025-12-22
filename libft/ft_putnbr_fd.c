/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/31 21:37:45 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/02 19:43:52 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// need to add a condition for the biggest negative number
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
	}
	ft_putchar_fd((n % 10 + '0'), fd);
}

// int	main(void)
// {
// 	int number;
// 	number = -910;
// 	ft_putnbr_fd(number, 1);
// 	printf("\n");
// 	number = 910;
// 	ft_putnbr_fd(number, 1);
// }