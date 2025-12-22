/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 16:32:39 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/05 20:12:32 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	multiply;

	sign = 1;
	multiply = 0;
	while (*str == ' ' || ((*str >= 9) && (*str <= 13)))
		str++;
	if ((*str == '-') || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && (*str >= 48 && *str <= 57))
	{
		multiply = multiply * 10 + (*str - 48);
		str++;
	}
	return (multiply * sign);
}

// #include <unistd.h>

// int	main(void)
// {
// 	printf("%d \n", ft_atoi("-+--24443"));
// 	printf("%d \n", ft_atoi("1"));
// }
