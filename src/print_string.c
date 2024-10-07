/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:04:56 by garaujo           #+#    #+#             */
/*   Updated: 2024/09/28 14:36:16 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_string(const char **str, va_list args, int *printed_chars)
{
	char	*string;

	if (**str != 's')
		return ;
	string = va_arg(args, char *);
	if (!string)
		string = "(null)";
	while (*string)
	{
		*printed_chars += ft_putchar(*string);
		string++;
	}
}
