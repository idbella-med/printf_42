/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <mohidbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:54:14 by mohidbel          #+#    #+#             */
/*   Updated: 2024/11/23 20:30:36 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_hexa(size_t n, int *count)
{
	char	*set;

	set = "0123456789abcdef";
	if (n < 16)
		ft_putchar(set[n], count);
	else
	{
		ft_print_hexa(n / 16, count);
		ft_print_hexa(n % 16, count);
	}
}

void	ft_puthexa(void *p, int *count)
{
	size_t	n;

	if (!p)
	{
		ft_putstr("0x0", count);
		return ;
	}
	n = (size_t)p;
	ft_putstr("0x", count);
	ft_print_hexa(n, count);
}
