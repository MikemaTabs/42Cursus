/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:12:57 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/18 18:11:43 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen((char *) src);
	if (size)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
/*
int main(void)
{
	size_t i;
	char src[] = "adios";
	char dst[] = "";
	i = ft_strlcpy(dst, src, 4);
	printf("source: %ld\n", i);
	printf("destiny: %s\n", dst);
	return (0);
}
*/