/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvebers <kvebers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:07:04 by kvebers           #+#    #+#             */
/*   Updated: 2022/11/10 16:15:40 by kvebers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

#include "libft/libft.h"
#include <stdarg.h>

int ft_printf(const char *str, ...);
int ft_putstr(const char *str);
int ft_putchar(int C);                                                                                                         
int ft_puthex(unsigned long adress, int up_low);
int ft_putdeca(int C);
int ft_putunsigned(unsigned long C);
int ft_putptr(unsigned long C);

#endif
