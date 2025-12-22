/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_intret.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/11 17:42:27 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/21 23:09:52 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_intret(char c)
{
	write(1, &c, 1);
	return (1);
}
