/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percentage.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:07:35 by garaujo           #+#    #+#             */
/*   Updated: 2024/09/27 22:08:05 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_percentage(const char **str, int *printed_chars)
{
	if (**str != '%')
		return ;
	*printed_chars += ft_putchar('%');
}
