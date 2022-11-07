/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvebers <kvebers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:32:36 by kvebers           #+#    #+#             */
/*   Updated: 2022/11/07 19:09:15 by kvebers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int ft_lunch_args(const char *str, va_list args)
{
	int args_len;

	args_len = 0;
	if (str == c)
		args_len = function1(va_arg(args, char));
	else if (str == 's')
		args_len = function2(va_arg(args, char *));
	else if (str == 'p')
		args_len = function3(va_arg(args, unsigned long long));
	else if (str == 'd')
		args_len = function4(va_arg(args, double));
	else if (str == 'i')
		args_len = function5(va_arg(args, int));
	else if (str == 'u')
		args_len = function6(va_arg(args, unsigned int));
	else if (str == 'x')
		args_len = function7(va_arg(args, unsigned int));
	else if (str == 'X')
		args_len = function8(va_arg(args, unsigned int));
	else if (str == '%')
		args_len = function9(va_arg(args, char));
	return (args_len);
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int out_len;
	

	out_len = 0;
	va_start(args, str);
	while(!str)
	{
		if (*str == '%')
		{
			out_len = out_len + ft_lunch_args(*(str + 1), args);
			str++;
		}
		else
		{
			out_len++;
			ft_putchar_fd(*str, 1);
		}
		str++;
	}
	va_end(args);
	return (out_len);
}