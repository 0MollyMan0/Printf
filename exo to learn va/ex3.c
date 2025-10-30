/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_until_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:24:30 by marvin            #+#    #+#             */
/*   Updated: 2025/10/30 20:24:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int sum_until_zero(int first, ...)
{
    va_list arg;
    int sum;
    int next;

    va_start(arg, first);
	sum = first;
    while ((next = va_arg(arg, int)) != 0)
        sum += next;
    va_end(arg);
    return sum;
}

int main(void) {
    printf("%d\n", sum_until_zero(10, 20, 0));      // 30
    printf("%d\n", sum_until_zero(1, 2, 3, 4, 0));  // 10
}
