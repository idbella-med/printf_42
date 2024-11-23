/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <mohidbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:54:28 by mohidbel          #+#    #+#             */
/*   Updated: 2024/11/23 20:32:12 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tohexa(unsigned int n, char c, int *len)
{
	char	*set;

	if (c == 'X')
		set = "0123456789ABCDEF";
	else if (c == 'x')
		set = "0123456789abcdef";
	if (n < 16)
		ft_putchar(set[n], len);
	else
	{
		ft_tohexa(n / 16, c, len);
		ft_tohexa(n % 16, c, len);
	}
}
