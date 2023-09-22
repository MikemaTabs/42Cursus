/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:12:57 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/22 14:10:55 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen((char *) src);
	if (dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
/* 
int	main(void)
{
	char src[] = "aaaaaaaaaa";
	char dst[] = "bbbbbbb";
	printf("ft=%ld\n", ft_strlcpy(dst, src, 3));
	printf("src=%s\n", src);
	printf("dst=%s\n", dst);
	return (0);
}
 */