/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:17:44 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/02 17:43:26 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen (s1) + 1;
	s2 = malloc (len);
	if (!s2)
		return (0);
	ft_memcpy (s2, s1, len);
	return (s2);
}
/* 
int main(void)
{
	char dup[] = "hola";
	char *i = ft_strdup(dup);
	printf("%s\n", i);
	return (0);
}
 */