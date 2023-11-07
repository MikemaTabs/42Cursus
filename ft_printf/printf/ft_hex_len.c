/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:20:05 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/07 18:16:51 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned long nbr)
{
	int	len;

	len = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}
