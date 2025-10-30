/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_ints.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:21:11 by anfouger          #+#    #+#             */
/*   Updated: 2025/10/30 16:31:52 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int sum_ints(int count, ...)
{
	int sum;
	int i;
	va_list	arg;

	sum = 0;
	i = 0;
	va_start(arg, count);
	while (i < count)
	{
		sum +=	va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (sum);
}

int main(void) {
    printf("%d\n", sum_ints(3, 10, 20, 30)); // 60
    printf("%d\n", sum_ints(5, 1, 2, 3, 4, 5)); // 15
}
