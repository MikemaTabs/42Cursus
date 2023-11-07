/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:57:16 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/07 18:09:24 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arg_p(unsigned long address)
{
	char	*num;
	int		bytes;
	int		i;

	i = 0;
	if (!address)
		return (write(1, "(null)", sizeof(char) * 6));
	bytes = write(1, "0x", sizeof(char) * 2);
	num = (char *)malloc(((ft_hex_len(address)) + 1) * sizeof(char));
	while (address)
	{
		num[i] = ft_decimal_to_hex(address % 16, 'x');
		address /= 16;
		i++;
	}
	num[i] = '\0';
	bytes += ft_reverse_str(num);
	ft_free_ptr(&num);
	return (bytes);
}
