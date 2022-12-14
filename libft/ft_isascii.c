/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvebers <kvebers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 08:28:59 by kvebers           #+#    #+#             */
/*   Updated: 2022/10/20 09:45:01 by kvebers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int C)
{
	if (C >= 0 && C <= 127)
		return (1);
	return (0);
}
