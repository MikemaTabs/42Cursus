/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:10:16 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/20 15:11:14 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		*((unsigned char *)(b + len)) = (unsigned char) c;
	return (b);
}
/*
int	main(void)
{
	char str[] = "123456";
	printf("%s\n", ft_memset(str, 'z', 3));
	return (0);
}
*/