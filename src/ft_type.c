/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:21:42 by anfouger          #+#    #+#             */
/*   Updated: 2025/10/30 15:59:44 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_type(char type, void *var)
{
	int res;
	
	if (type = '%')
		res = ft_putchar('%');
	if (type = 'c')
		res = ft_putchar(var);
	if (type = 's')
		res = ft_putstr(var);
	if (type = 'i' && 'd')
		res = ft_putnbr(var);
	if (type = 'x' && 'X')
		res = ft_putnbr_base_hex(var, type);
	if (type = 'u')
		res = ft_putnbr_u();
	return (res);
}