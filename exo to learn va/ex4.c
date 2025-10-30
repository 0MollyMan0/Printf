/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:32:14 by marvin            #+#    #+#             */
/*   Updated: 2025/10/30 20:32:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

double average_of_integers(int count, ...)
{
	int i = 0;
	int sum = 0;
	int max = INT_MIN;
	int tmp;
	va_list	arg1;
	va_list arg2;

	va_start(arg1, count);
	va_copy(arg2, arg1);
	while (i++ < count)
		sum += va_arg(arg1, int);
	i = 0;
	while (i++ < count)
	{
		if ((tmp = va_arg(arg2, int)) > max)
			max = tmp;
	}
	va_end(arg1);
	va_end(arg2);
	return ((double)sum/count);	
}

int main(void) {
    printf("Average: %.2f\n", average_of_integers(4, 10, 20, 30, 40)); 
    // Should print: Average: 25.00
}