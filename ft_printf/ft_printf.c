/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/09 18:56:54 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/09 18:21:54 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	print_type(char flag, va_list arg_ptr)
{
	int	i;

	i = 0;
	if (flag == 'c')
		i += ft_putchar_intret(va_arg(arg_ptr, int));
	else if (flag == 's')
		i += ft_putstr_intret(va_arg(arg_ptr, char *));
	else if (flag == 'd' || flag == 'i')
		i += ft_putnum_intret(va_arg(arg_ptr, int), 10, "0123456789");
	else if (flag == 'x')
		i += ft_putnum_intret(va_arg(arg_ptr, unsigned int), 16,
				"0123456789abcdef");
	else if (flag == 'X')
		i += ft_putnum_intret(va_arg(arg_ptr, unsigned int), 16,
				"0123456789ABCDEF");
	else if (flag == 'u')
		i += ft_putnum_intret((unsigned int)va_arg(arg_ptr, unsigned int), 10,
				"0123456789");
	else if (flag == 'p')
		i += ft_ptr_helper(va_arg(arg_ptr, size_t), 16, "0123456789abcdef");
	else if (flag == '%')
		i += write(1, "%", 1);
	else
		return (-1);
	return (i);
}

int	ft_printf(const char *type, ...)
{
	va_list	arg_ptr;
	int		i;

	if (type == NULL)
		return (-1);
	va_start(arg_ptr, type);
	i = 0;
	while (*type)
	{
		if (*type == '%')
			i += print_type(*(++type), arg_ptr);
		else
			i += write(1, type, 1);
		++type;
	}
	va_end(arg_ptr);
	return (i);
}

// int	main(void)
// {
// 	ft_printf("char: %c\n", 'a');
// 	ft_printf("string: %s\n", "fuck stupid prorgarm");
// 	ft_printf("int: %d\n", 1);
// 	ft_printf("int: %d\n", 2);
// 	ft_printf("percent: %%\n");
// 	ft_printf("decimal: %d\n", -42);
// 	ft_printf("unsigned: %u\n", 3000000000);
// 	ft_printf("hex lower: %x\n", 48879);
// 	ft_printf("hex upper: %X\n", 48879);
// 	ft_printf("pointer: %p\n", (void *)0x1234abcd);
// }
