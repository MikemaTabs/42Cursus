/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:13:11 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/29 17:59:13 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	cpy;

	i = 0;
	cpy = 0;
	while (dst[i] && i < size)
		i++;
	while (src[cpy] && (i + cpy + 1) < size)
	{
		dst[i + cpy] = src[cpy];
		cpy++;
	}
	if (i < size)
		dst[i + cpy] = '\0';
	return (i + ft_strlen(src));
}
/* 
int	main(void)
{
	char src[] = "123456";
	char dst[] = "zxcvbn";
	printf("%ld\n", ft_strlcat(dst, src, 3));
	return (0);
}
 */