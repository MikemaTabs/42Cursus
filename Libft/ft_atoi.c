/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:11:18 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/02 13:48:49 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cont;
	int	num;
	int	sign;

	cont = 0;
	num = 0;
	sign = 1;
	while (str[cont] == 32 || (str[cont] > 8 && str[cont] < 14))
		cont++;
	if (str[cont] == '-')
		sign = sign * -1;
	if (str[cont] == '+' || str[cont] == '-')
		cont++;
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		num = (str[cont] - 48) + (num * 10);
		cont++;
	}
	num = num * sign;
	return (num);
}
/* 
int	main(void)
{
	printf("%d", ft_atoi("1200 -654 + 2 +2 -1"));
	return (0);
}
 */