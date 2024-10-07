/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:08:10 by garaujo           #+#    #+#             */
/*   Updated: 2024/10/04 19:40:20 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_putchar(char c);
void	ft_putnbr(long long n, int *printed_chars);
int		ft_printf(const char *str, ...);
void	print_char(const char **str, va_list args, int *printed_chars);
void	print_string(const char **str, va_list args, int *printed_chars);
void	print_integer(const char **str, va_list args, int *printed_chars);
void	print_percentage(const char **str, int *printed_chars);
void	print_hex(const char **str, va_list args, int *printed_chars);
void	convert_hex(unsigned long int hex, int upcase_mod, int *printed_chars);
void	print_pointer(const char **str, va_list args, int *printed_chars);
#endif
