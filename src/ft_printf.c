/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:10:24 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/02 12:51:39 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int i;
	va_list args;
	int count;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			count += ft_type(s[i++], args);
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return(count);
}
/*
#include <stdio.h>

int main(void)
{
    int n;

    n = ft_printf("Hello %s ! J'ai %c ans et j'aime le %%.\n", "toi", '5');
    printf(" → %d caractères affichés\n", n);

    n = ft_printf("Test : %c %s %c\n", 'A', "abc", 'Z');
    printf(" → %d caractères affichés\n", n);

    return 0;
}
*/
