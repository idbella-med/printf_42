/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <mohidbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:53:51 by mohidbel          #+#    #+#             */
/*   Updated: 2024/11/23 20:33:00 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_u_int(unsigned int n, int *len)
{
	if (n > 9)
	{
		ft_put_u_int(n / 10, len);
		ft_put_u_int(n % 10, len);
	}
	if (n <= 9)
		ft_putchar((n + 48), len);
}
