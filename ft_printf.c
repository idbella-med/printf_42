/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <mohidbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:53:33 by mohidbel          #+#    #+#             */
/*   Updated: 2024/11/23 20:28:41 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_type_and_print_it(char c, va_list args, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (c == 'u')
		ft_put_u_int(va_arg(args, unsigned int), len);
	else if (c == 'p')
		ft_puthexa(va_arg(args, void *), len);
	else if (c == 'X' || c == 'x')
		ft_tohexa(va_arg(args, unsigned int), c, len);
	else if (c == '%')
		ft_putchar('%', len);
}

static int	check_format(char c)
{
	int		i;
	char	*set;

	i = 0;
	set = "cspdiuxX%";
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	va_list(args);
	if (write(1, "", 0) < 0)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && check_format(str[i + 1]))
		{
			check_type_and_print_it(str[i + 1], args, &len);
			i++;
		}
		else if (str[i] != '%")
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
