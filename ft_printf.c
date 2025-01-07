/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoelman <vpoelman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:29:53 by vpoelman          #+#    #+#             */
/*   Updated: 2024/10/30 13:29:53 by vpoelman         ###   ########.fr       */
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
/*
int	main(void)
{
	int				num;
	char			*str;
	char			c;
	unsigned int	hex;
	unsigned int	unsigned_num;
	void			*ptr;

	// Test d'affichage simple
	ft_printf("Affichage simple : Hello, World!\n");
	// Test avec un entier
	num = 42;
	ft_printf("Affichage d'un entier : %d\n", num);
	// Test avec une chaîne de caractères
	str = "42 School";
	ft_printf("Affichage d'une chaîne : %s\n", str);
	// Test avec une chaîne NULL
	ft_printf("Affichage d'une chaîne NULL : %s\n", NULL);
	// Test avec un caractère
	c = 'A';
	ft_printf("Affichage d'un caractère : %c\n", c);
	// Test avec un nombre hexadécimal
	hex = 255;
	ft_printf("Affichage en hexadécimal (minuscule) : %x\n", hex);
	ft_printf("Affichage en hexadécimal (majuscule) : %X\n", hex);
	// Test avec un unsigned int
	unsigned_num = 4294967295;
	ft_printf("Affichage d'un unsigned int : %u\n", unsigned_num);
	// Test avec un pointeur
	ptr = str;
	ft_printf("Affichage d'un pointeur : %p\n", ptr);
	// Test avec le caractère %
	ft_printf("Affichage du caractère %% : %%\n");
	return (0);
}*/