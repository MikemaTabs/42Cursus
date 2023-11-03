/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:09:58 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/03 17:17:38 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_unsigned_nbr(unsigned int nbr)
{
	if (nbr < 10)
		return (ft_putchar_fd(nbr + '0', 1));
	else
	{
		if (ft_putchar_fd() < 0 || ft_putchar_fd() < 0)
			return (-1);
		ft_put_unsigned_nbr(nbr / 10);
		ft_put_unsigned_nbr(nbr % 10);
	}
}

int	ft_arg_u(unsigned int nbr)
{
	ft_put_unsigned_nbr(nbr);
	return (ft_decimal_len(nbr));
}
