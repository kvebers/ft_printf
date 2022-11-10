/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvebers <kvebers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:07:04 by kvebers           #+#    #+#             */
/*   Updated: 2022/11/10 16:52:42 by kvebers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(const char *str);
int	ft_putchar(int C);
int	ft_puthex(unsigned long adress, int up_low);
int	ft_putdeca(int C);
int	ft_putunsigned(unsigned long C);
int	ft_putptr(unsigned long C);

#endif
