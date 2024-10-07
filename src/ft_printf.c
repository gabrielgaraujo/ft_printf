/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:18:04 by garaujo           #+#    #+#             */
/*   Updated: 2024/10/02 17:14:44 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_specifier(const char **str, va_list args)
{
	int	printed_chars;

	printed_chars = 0;
	(*str)++;
	print_char(str, args, &printed_chars);
	print_string(str, args, &printed_chars);
	print_integer(str, args, &printed_chars);
	print_percentage(str, &printed_chars);
	print_hex(str, args, &printed_chars);
	print_pointer(str, args, &printed_chars);
	return (printed_chars);
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
			printed_chars += handle_specifier(&str, args);
		else
			printed_chars += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (printed_chars);
}
