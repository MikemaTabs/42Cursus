/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:17:44 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/25 16:02:04 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	s_len;
	int		i;

	i = 0;
	s_len = ft_strlen(s);
	copy = malloc(sizeof(char) * (s_len + 1));
	if (!copy)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/* 
int main(void)
{
	char s[] = "hola";
	char *i = ft_strdup(s);
	printf("%s", i);
	return (0);
}
 */