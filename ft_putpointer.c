/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoelman <vpoelman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:40:43 by vpoelman          #+#    #+#             */
/*   Updated: 2025/01/08 19:40:45 by vpoelman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	unsigned long long	address;
	int					count;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	address = (unsigned long long)ptr;
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex_long(address, 0);
	return (count);
}
