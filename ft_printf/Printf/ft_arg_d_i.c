/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:37:34 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/06 19:05:59 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int nbr)
{
	int	sum;

	sum = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		if (nbr == -2147483648)
		{
			nbr--;
			sum = 1;
		}
	}
	if (nbr < 10)
		ft_putchar_fd(nbr + 48 + sum, 1);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10 + sum);
	}
}

int	ft_arg_d_i(int c)
{
	ft_putnbr(c);
	return (ft_decimal_len(c));
}
