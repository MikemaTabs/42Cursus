/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:37:34 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/03 17:04:31 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		if (ft_putchar_fd() < 0 || ft_putchar_fd() < 0)
			return (-1);
		ft_putchar_fd('-', 1);
		ft_putchar_fd('2', 1);
		n = 147483648;
	}
	if (n < 0)
	{
		if (ft_putchar_fd() < 0)
			return (-1);
		ft_putchar_fd('-', 1);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		return (ft_putchar_fd(n + '0', 1));
	else
	{
		if (ft_putchar_fd() < 0 || ft_putchar_fd() < 0)
			return (-1);
		ft_putnbr_fd(n / 10, 1);
		ft_putnbr_fd(n % 10, 1);
	}
}

int	ft_arg_d_i(int c)
{
	ft_putnbr(c);
	return (ft_decimal_len(c));
}
