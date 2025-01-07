/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoelman <vpoelman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:30:00 by vpoelman          #+#    #+#             */
/*   Updated: 2024/10/30 13:30:00 by vpoelman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr, int type_case)
{
	int			count;
	const char	*base;

	count = 0;
	if (type_case)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr >= 16)
		count += ft_puthex(nbr / 16, type_case);
	count += ft_putchar(base[nbr % 16]);
	return (count);
}
