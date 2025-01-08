/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoelman <vpoelman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:40:01 by vpoelman          #+#    #+#             */
/*   Updated: 2025/01/08 19:40:01 by vpoelman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_find_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	else if (c == 'p')
		return (ft_putpointer(va_arg(args, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (ft_putchar('%') + ft_putchar(c));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		printed_chars;

	if (str == NULL)
		return (-1);
	printed_chars = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			printed_chars += ft_find_format(*str, args);
		}
		else
			printed_chars += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (printed_chars);
}
