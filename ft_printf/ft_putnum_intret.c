/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnum_intret.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/11 17:40:00 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/20 19:40:01 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnum_intret(long n, int base, char *symbols)
{
	int	i;

	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_putnum_intret(-n, base, symbols) + 1);
	}
	else if (n < base)
		return (ft_putchar_intret(symbols[n]));
	else
	{
		i = ft_putnum_intret(n / base, base, symbols);
		return (i + ft_putnum_intret(n % base, base, symbols));
	}
}
