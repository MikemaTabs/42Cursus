/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:07:21 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/22 16:35:34 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	if (*needle == 0)
		return ((char *) haystack);
	i = 0;
	nlen = ft_strlen(needle);
	while (i < len && haystack[i])
	{
		if (haystack[i] == *needle && len - i >= nlen
			&& ft_strncmp(&haystack[i], needle, nlen) == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char haystack[] = "xxxxholaxxxx";
	char needle[] = "hola";
	printf("%s\n", ft_strnstr(haystack, needle, 12));
	return (0);
}
 */