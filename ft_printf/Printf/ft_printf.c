/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:54:57 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/02 17:20:26 by fbascuna         ###   ########.fr       */
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
	
}

int	ft_printf(const char *string, ...)
{
	
}