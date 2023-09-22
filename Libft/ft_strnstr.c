/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:07:21 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/22 14:39:57 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	nlen;

	if (*little == 0)
		return ((char *) big);
	i = 0;
	nlen = ft_strlen(little);
	while (i < len && big[i])
	{
		if (big[i] == *little && len - i >= nlen
			&& ft_strncmp(&big[i], little, nlen) == 0)
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char big[] = "";
	char little[] = "";
	printf("%s", ft_strnstr(big, little, 3));
	return (0);
}
