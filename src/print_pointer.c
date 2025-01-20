/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaaraujo <gaaraujo@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:15:36 by garaujo           #+#    #+#             */
/*   Updated: 2025/01/20 14:54:18 by gaaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_pointer(const char **str, va_list args, int *printed_chars)
{
	unsigned long long	pointer;

	if (**str != 'p')
		return ;
	pointer = va_arg(args, unsigned long int);
	if (pointer == 0)
	{
		*printed_chars += write(1, "(nil)", 5);
		return ;
	}
	*printed_chars += ft_putchar('0');
	*printed_chars += ft_putchar('x');
	convert_hex(pointer, 87, printed_chars);
}
