/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaaraujo <gaaraujo@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:51:00 by garaujo           #+#    #+#             */
/*   Updated: 2025/01/20 14:54:25 by gaaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_putnbr(long long n, int *printed_chars)
{
	if (n < 0)
	{
		*printed_chars += ft_putchar('-');
		ft_putnbr(-n, printed_chars);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10, printed_chars);
		*printed_chars += ft_putchar(n % 10 + '0');
	}
	else
	{
		*printed_chars += ft_putchar(n + '0');
	}
}
