/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:12:25 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/19 15:26:29 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (0);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			*((unsigned char *)(dest + n)) = *((unsigned char *)(src + n));
	}
	return (dest);
}
/*
int main(void)
{
	char src[] = "Hola Mundo";
	char dest[]= "aaaa infierno";
	ft_memmove(dest, src, 4);
	printf("Source: %s\n", src);
	printf("Destiny: %s\n", dest);
	return 0;
}
*/