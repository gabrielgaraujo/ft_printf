/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:08:15 by garaujo           #+#    #+#             */
/*   Updated: 2024/10/04 19:39:52 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_hex(unsigned long int hex, int upcase_mod, int *printed_chars)
{
	if (hex >= 16)
	{
		convert_hex(hex / 16, upcase_mod, printed_chars);
		convert_hex(hex % 16, upcase_mod, printed_chars);
	}
	else
	{
		if (hex < 10)
			*printed_chars += ft_putchar(hex + '0');
		else
			*printed_chars += ft_putchar(hex + upcase_mod);
	}
}

void	print_hex(const char **str, va_list args, int *printed_chars)
{
	unsigned int	hex;
	int				upcase_mod;

	if (**str != 'x' && **str != 'X')
		return ;
	if (**str == 'X')
		upcase_mod = 55;
	else
		upcase_mod = 87;
	hex = va_arg(args, unsigned int);
	convert_hex(hex, upcase_mod, printed_chars);
}
