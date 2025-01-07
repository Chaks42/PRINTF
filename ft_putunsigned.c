/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoelman <vpoelman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:30:12 by vpoelman          #+#    #+#             */
/*   Updated: 2024/10/30 13:30:12 by vpoelman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putunsigned(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 10)
		count += ft_putunsigned(nbr / 10);
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}
