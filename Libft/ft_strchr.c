/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:00:56 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/20 13:57:14 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char) !c)
		return ((char *) &s[i]);
	return (0);
}
/*
int main(void)
{
	char i[] = "hola me llamo miguel";
	printf("%s", ft_strchr(i, 'm'));
	return (0);
}
*/