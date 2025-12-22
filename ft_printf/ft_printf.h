/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/11 17:42:15 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/22 03:24:39 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <bsd/string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *type, ...);
int		ft_putchar_intret(char c);
size_t	ft_strlen(const char *str);
int		ft_ptr_helper(size_t n, size_t base, char *symbols);
int		ft_putstr_intret(char *s);
int		ft_putnum_intret(long n, int base, char *symbols);

#endif