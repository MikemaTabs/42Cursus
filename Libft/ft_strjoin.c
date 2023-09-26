/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:37:35 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/26 14:05:37 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1_len;
	int		s2_len;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
		str[s1_len++] = s2[i++];
	str[s1_len] = '\0';
	return (str);
}
/* 
int main(void)
{
	char s1[] = "the moment I understood the weakness of my flesh";
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