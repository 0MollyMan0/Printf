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
#include <limits.h>

int main(void)
{
    int     ret_ft;
    int     ret_std;
    char    c = 'A';
    char    *str = "Hello world";
    char    *null_str = NULL;
    int     n = 42;
    int     neg = -42;
    unsigned int u = 4294967295;
    void    *ptr = &n;
    void    *null_ptr = NULL;

    printf("\n=====================\n");
    printf("🔹 TEST COMPLET FT_PRINTF\n");
    printf("=====================\n\n");

    /* ---------- %c ---------- */
    printf("🧩 Test %%c\n");
    ret_ft = ft_printf("ft_printf : [%c]\n", c);
    ret_std = printf("printf    : [%c]\n\n", c);

    /* ---------- %s ---------- */
    printf("🧩 Test %%s (normal + NULL)\n");
    ret_ft = ft_printf("ft_printf : [%s] [%s]\n", str, null_str);
    ret_std = printf("printf    : [%s] [%s]\n\n", str, null_str);

    /* ---------- %d / %i ---------- */
    printf("🧩 Test %%d et %%i\n");
    ret_ft = ft_printf("ft_printf : [%d] [%i] [%d] [%d]\n", n, neg, INT_MAX, INT_MIN);
    ret_std = printf("printf    : [%d] [%i] [%d] [%d]\n\n", n, neg, INT_MAX, INT_MIN);

    /* ---------- %u ---------- */
    printf("🧩 Test %%u\n");
    ret_ft = ft_printf("ft_printf : [%u] [%u]\n", u, 0);
    ret_std = printf("printf    : [%u] [%u]\n\n", u, 0);

    /* ---------- %x / %X ---------- */
    printf("🧩 Test %%x et %%X\n");
    ret_ft = ft_printf("ft_printf : [%x] [%X]\n", 255, 255);
    ret_std = printf("printf    : [%x] [%X]\n\n", 255, 255);

    /* ---------- %p ---------- */
    printf("🧩 Test %%p (normal + NULL)\n");
    ret_ft = ft_printf("ft_printf : [%p] [%p]\n", ptr, null_ptr);
    ret_std = printf("printf    : [%p] [%p]\n\n", ptr, null_ptr);

    /* ---------- %% ---------- */
    printf("🧩 Test %%%% (afficher un pourcentage)\n");
    ret_ft = ft_printf("ft_printf : [%%]\n");
    ret_std = printf("printf    : [%%]\n\n");

    /* ---------- Résumé ---------- */
    printf("=====================\n");
    printf("✅ Fin des tests\n");
    printf("=====================\n\n");

    return (0);
}
