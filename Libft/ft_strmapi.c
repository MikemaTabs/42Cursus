/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:02:16 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/07 17:27:28 by fbascuna         ###   ########.fr       */
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

int main(void)
{
    char input[] = "hola";
	int i = 'h';
    char *result = ft_strmapi(input, ft_toupper(i));
    printf("%s\n", result);
    return (0);
}
