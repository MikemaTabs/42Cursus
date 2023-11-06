/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:57:16 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/06 16:15:42 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arg_p(unsigned long nbr)
{
	char	*num;
	int		bytes;
	int		i;

	i = 0;
	if (!nbr)
		return (write(1, "(null)", sizeof(char) * 6));
	bytes = write(1, "0x", sizeof(char) * 2);
	num = (char *)malloc(((ft_hex_len(nbr)) + 1) * sizeof(char));
	while (nbr)
	{
		num[i] = ft_decimal_to_hex(nbr % 16, 'x');
		nbr /= 16;
		i++;
	}
	num[i] = '\0';
	bytes += ft_reverse_str(num);
	ft_free_ptr(&num);
	return (bytes);
}
