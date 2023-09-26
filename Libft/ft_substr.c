/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:54:18 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/26 16:48:21 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	tam;

	tam = ft_strlen(s);
	if (tam <= start)
		return (ft_strdup(""));
	if (tam - start < len)
		len = tam - start;
	substr = (char *)malloc (len + 1);
	if (!substr)
		return (0);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
/* 
int	main(void)
{
	char s[] = "From the moment I understood the weakness of my flesh";
	char *p = ft_substr(s, 29, 12);
	printf("%s\n", p);
	return (0);
}
 */