/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoelman <vpoelman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 10:59:50 by vpoelman          #+#    #+#             */
/*   Updated: 2024/01/07 10:59:50 by vpoelman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_long(unsigned long long nbr, int type_case)
{
	int			count;
	const char	*base;

	count = 0;
	if (type_case)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr >= 16)
		count += ft_puthex_long(nbr / 16, type_case);
	count += ft_putchar(base[nbr % 16]);
	return (count);
}
