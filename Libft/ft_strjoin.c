/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:37:35 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/03 17:13:46 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str3;
	size_t	size;

	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	str3 = (char *)malloc (size + 1);
	if (!str3)
		return (0);
	ft_memcpy(str3, s1, ft_strlen(s1));
	ft_memcpy(str3 + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (str3);
}
/*
int main(void)
{
	char s1[] = "The moment I understood the weakness of my flesh";
	char s2[] = ", it disgusted me. I craved the strength and";
	char s3[] = " certainty of steel. I aspired to the purity of";
	char s4[] = " the Blessed Machine. Your kind cling to your";
	char s5[] = " flesh, as though it will not decay and fail you.";
	char s6[] = " One day the crude biomass you call the temple";
	char s7[] = " will wither, and you will beg my kind to save you.";
	char s8[] = " But I am already saved, for the Machine is";
	char s9[] = " immortal... Even in death";
	char s10[] = " I serve the Omnissiah.";
	printf("%s", ft_strjoin(s1, s2));
	printf("%s", ft_strjoin(s3, s4));
	printf("%s", ft_strjoin(s5, s6));
	printf("%s", ft_strjoin(s7, s8));
	printf("%s\n", ft_strjoin(s9, s10));
	return (0);
}
*/