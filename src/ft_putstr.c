/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvebers <kvebers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:31:17 by kvebers           #+#    #+#             */
/*   Updated: 2022/11/08 15:05:58 by kvebers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_putstr(const char *str)
{
    if (str == NULL)
    {
            ft_putstr_fd("(null)", 1);
            return (6);        
    }
    ft_putstr_fd((char *)str, 1);
    return (ft_strlen(str));
}
