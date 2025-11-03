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

int	ft_putnbr_base_hex(int nbr, char def_base);
int		ft_strlen(char *str);
int	ft_putnbr_base_ll(long long nbr, char *base);
int		ft_verif_base(char *base);

int	ft_putnbr_base_u(long long nbr, char *base)
{
	int	count = 0;
	char	c;
	int	base_len = ft_strlen(base);

	if (nbr >= base_len)
		count += ft_putnbr_base_ll(nbr / base_len, base);
	c = base[nbr % base_len];
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_putnbr_base_hex(unsigned int nbr, char def_base)
{
	char	*base;
	int		count;

	if (def_base == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (ft_verif_base(base) == 1)
		return (0);
	count = ft_putnbr_base_ll(nbr, base);
	return (count);
}

int	ft_verif_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j]
				|| base[j] == '-' || base[i] == '-'
				|| base[j] == '+' || base[i] == '+'
				|| base[j] == ' ' || base[i] == ' ')
				return (1);
			j++;
		}
		i++;
	}
	if (ft_strlen(base) < 2)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
