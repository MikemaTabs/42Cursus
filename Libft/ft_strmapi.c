/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:02:16 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/08 16:46:10 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		cont;
	char	*str;

	if (!s || !f)
		return (0);
	cont = ft_strlen(s);
	str = malloc((cont + 1) * sizeof(char));
	if (!str)
		return (0);
	cont = 0;
	while (s[cont])
	{
		str[cont] = f(cont, s[cont]);
		cont++;
	}
	str[cont] = '\0';
	return (str);
}
/* 
char	ft_toupper_mod(unsigned int a, char c)
{
	(void)a;
	return(ft_toupper(c));
}

int main(void)
{
    char s[] = "Hola me llamo Miguel";
    char *p = ft_strmapi(s, ft_toupper_mod);
    printf("%s\n", p);
    return (0);
}
 */