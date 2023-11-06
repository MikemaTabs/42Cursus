/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:54:57 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/06 18:55:24 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_check(va_list arg, char c)
{
	int	bytes;

	bytes = 0;
	if (c == '%')
		bytes += ft_arg_perc();
	if (c == 'c')
		bytes += ft_arg_c(va_arg(arg, int));
	if (c == 's')
		bytes += ft_arg_s(va_arg(arg, char *));
	if (c == 'u')
		bytes += ft_arg_u(va_arg(arg, unsigned int));
	if (c == 'd' || c == 'i')
		bytes += ft_arg_d_i(va_arg(arg, int));
	return (bytes);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		bytes;
	char	c;

	i = 0;
	bytes = 0;
	va_start(arg, str);
	while (str[i])
	{
		c = str[i + 1];
		if (str[i] == '%')
		{
			bytes += ft_printf_check(arg, c);
			i++;
		}
		else
			bytes += write(1, &str[i], sizeof(char));
		i++;
	}
	va_end(arg);
	return (bytes);
}
