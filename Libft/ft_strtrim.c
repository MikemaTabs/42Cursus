/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:57:33 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/26 16:37:22 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	cont;
	size_t	len;

	cont = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	if (s1[cont] == '\0' && len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[cont]))
		cont++;
	while (ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, cont, len - cont + 1));
}
/* 
int main(void)
{
	char s1[] = "xxxxxxme voy a cagar con el splitxxxxxx";
	char set[] = "x";
	char *p = ft_strtrim(s1, set);
	printf("%s\n", p);
	return (0);
}
 */