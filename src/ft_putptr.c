/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvebers <kvebers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:47:11 by kvebers           #+#    #+#             */
/*   Updated: 2022/11/10 16:21:46 by kvebers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putptr(unsigned long C)
{
	int	cnt;

	cnt = 2;
	ft_putstr_fd("0x", 1);
	cnt = cnt + ft_puthex(C, 87);
	return (cnt);
}
