/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints_values.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:33:35 by anfouger          #+#    #+#             */
/*   Updated: 2025/10/30 16:43:42 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

void print_values(const char *fmt, ...)
{
	int i;
	va_list	arg;

	i = 0;
	va_start(arg, fmt);
	while (fmt[i])
	{
		if (fmt[i] == 'd')
			printf("%d", va_arg(arg, int));
		if (fmt[i] == 'f')
			printf("%f", va_arg(arg, double));
		if (fmt[i] == 'c')
			printf("%c", va_arg(arg, int));
		i++;
	}
	va_end(arg);
}

int main(void) {
    print_values("dcf", 42, 'A', 3.14);
}
