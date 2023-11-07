/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:05:46 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/08 16:00:57 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	cont;

	if (!s || !f)
		return ;
	cont = 0;
	while (s[cont])
	{
		f(cont, s + cont);
		cont++;
	}
}
/* 
void	ft_toupper_moo(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int main(void)
{
	char s[] = "Hola me llamo Miguel";
    ft_striteri(s, &ft_toupper_moo);
	printf("%s\n", s);
    return (0);
}
 */