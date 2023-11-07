/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:43:38 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/06 12:48:12 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_decimal_to_hex(char digit, char type)
{
	int	caps;

	caps = 0;
	if (type == 'X')
		caps = 32;
	if (digit > 9)
	{
		if (digit == 10)
			return ('a' - caps);
		if (digit == 11)
			return ('b' - caps);
		if (digit == 12)
			return ('c' - caps);
		if (digit == 13)
			return ('d' - caps);
		if (digit == 14)
			return ('e' - caps);
		if (digit == 15)
			return ('f' - caps);
	}
	else
		return (digit + '0');
	return (0);
}
