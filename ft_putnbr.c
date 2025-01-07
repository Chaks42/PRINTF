/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoelman <vpoelman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:30:04 by vpoelman          #+#    #+#             */
/*   Updated: 2024/10/30 13:30:04 by vpoelman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		count += ft_putnbr(nbr / 10);
	count += ft_putchar(nbr % 10 + '0');
	return (count);
}
