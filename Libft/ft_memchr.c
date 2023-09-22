/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:27:38 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/22 14:27:09 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (0);
}
/* 
int	main(void)
{
	char str[] = "me llamo juan";
	printf("%s", ft_memchr(str, 'j', 20));
	return (0);
}
 */