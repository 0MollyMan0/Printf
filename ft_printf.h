/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfouger <anfouger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:16:28 by anfouger          #+#    #+#             */
/*   Updated: 2025/10/30 16:22:49 by anfouger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putnbr_base_hex(int nbr, char def_base);
int	ft_putnbr_u(int nb);
int	ft_putnbr(int nb);
int	ft_type(char type, void *var);