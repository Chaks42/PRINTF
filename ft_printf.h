/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoelman <vpoelman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:40:10 by vpoelman          #+#    #+#             */
/*   Updated: 2025/01/08 19:40:12 by vpoelman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putunsigned(unsigned int nbr);
int	ft_putchar(char c);
int	ft_putnbr(int number);
int	ft_putpointer(void *ptr);
int	ft_putstr(char *str);
int	ft_puthex(unsigned int nbr, int uppercase);
int	ft_puthex_long(unsigned long long nbr, int type_case);

#endif