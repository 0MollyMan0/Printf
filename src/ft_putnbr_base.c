/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:23:42 by anfouger          #+#    #+#             */
/*   Updated: 2025/10/30 14:24:02 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_strlen(char *str);
void	ft_putnbr_base_ll(long long nbr, char *base);
int		ft_verif_base(char *base);

void	ft_putnbr_base_ll(long long nbr, char *base)
{
	char	w;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr / ft_strlen(base))
		ft_putnbr_base(nbr / ft_strlen(base), base);
	w = base[nbr % ft_strlen(base)];
	write (1, &w, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_verif_base(base) == 1)
		return ;
	ft_putnbr_base_ll(nbr, base);
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
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}
