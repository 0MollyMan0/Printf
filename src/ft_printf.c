/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:10:24 by anfouger          #+#    #+#             */
/*   Updated: 2025/10/30 14:28:45 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *s, ...)
{
	int i;

	i = 0;
	while (s[i++])
	{
		while (s[i++] != '%')
			ft_putchar(s[i]);
		switch (s[i+1])
		{
		case '%':
			ft_putchar('%');
			break;
		case 'c':
			ft_putchar();
			break;
		case 's':
			ft_putstr();
			break;
		case 'i' && 'd':
			ft_putnbr_fd( , 1);
			break;
		case 'x' && 'X':
			if ('x')
				ft_putnbr_base( , "0123456789abcdef");
			else
				ft_putnbr_base( , "0123456789ABCDEF");
			break;
		case 'u':
			break;
		default:
			break;
		}
	}
}
