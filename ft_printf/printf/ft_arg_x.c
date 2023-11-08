/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:08:19 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/08 16:09:03 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arg_x(unsigned int nbr, char type)
{
	char	*num;
	int		bytes;
	int		i;

	i = 0;
	if (!nbr)
		return (write(1, "0", sizeof(char) * 1));
	num = (char *)malloc((ft_hex_length(nbr) + 1) * sizeof(char));
	while (nbr)
	{
		num[i] = ft_decimal_converter_to_hex(nbr % 16, type);
		nbr /= 16;
		i++;
	}
	num[i] = '\0';
	bytes = ft_print_reversed_str(num);
	ft_free_ptr(&num);
	return (bytes);
}
