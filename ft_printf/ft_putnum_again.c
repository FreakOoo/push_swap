/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnum_again.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/22 03:01:17 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/22 06:26:04 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int	ft_putnum_again(size_t n, size_t base, char *symbols)
{
	int	i;

	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_putnum_again(-n, base, symbols) + 1);
	}
	else if (n < base)
		return (ft_putchar_intret(symbols[n]));
	else
	{
		i = ft_putnum_again(n / base, base, symbols);
		return (i + ft_putnum_again(n % base, base, symbols));
	}
}
int	ft_ptr_helper(size_t n, size_t base, char *symbols)
{
	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	return (ft_putnum_again(n, base, symbols) + 2);
}
