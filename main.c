/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:08:00 by anfouger          #+#    #+#             */
/*   Updated: 2025/11/02 13:08:02 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ret1, ret2;

    ret1 = ft_printf("Hello %s ! Nombre: %d, Char: %c, Pourcent: %%\n", "world", 42, 'A');
    ret2 = printf("Hello %s ! Nombre: %d, Char: %c, Pourcent: %%\n", "world", 42, 'A');

    printf("\nft_printf -> %d chars\nprintf    -> %d chars\n", ret1, ret2);
    return 0;
}
