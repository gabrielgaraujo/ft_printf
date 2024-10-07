/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:03:43 by garaujo           #+#    #+#             */
/*   Updated: 2024/09/27 22:04:12 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(const char **str, va_list args, int *printed_chars)
{
	char	character;

	if (**str != 'c')
		return ;
	character = va_arg(args, int);
	*printed_chars += ft_putchar(character);
}
