/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <mohidbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:54:19 by mohidbel          #+#    #+#             */
/*   Updated: 2024/11/23 12:03:13 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*len += 11;
	}
	else if (n < 0)
	{
		ft_putchar('-', len);
		ft_putnbr((n * -1), len);
	}
	else if (n > 9)
	{
		ft_putnbr((n / 10), len);
		ft_putnbr((n % 10), len);
	}
	else if (n <= 9)
		ft_putchar((n + 48), len);
}
