/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:23:42 by anfouger          #+#    #+#             */
/*   Updated: 2025/10/30 15:44:51 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbr_base_u(unsigned long nbr, char *base)
{
	int	count = 0;
	char	c;
	int	base_len = ft_strlen(base);

	if (nbr >= base_len)
		count += ft_putnbr_base_u(nbr / base_len, base);
	c = base[nbr % base_len];
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_putnbr_base_hex(unsigned long nbr, char def_base)
{
	int		count;
	if (def_base == 'p')
	{
		if (!nbr)
		{
			write(1, "(nil)", 5);
			return (5);
		}
		write(1, "0x", 2);
		count = 2 + ft_putnbr_base_u((unsigned long)nbr, "0123456789abcdef");
	}
	else if (def_base == 'X')
		count = ft_putnbr_base_u(nbr, "0123456789ABCDEF");
	else
		count = ft_putnbr_base_u(nbr, "0123456789abcdef");
	return (count);
}
