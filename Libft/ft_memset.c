/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:10:16 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/27 15:07:46 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		*((unsigned char *)(b + len)) = (unsigned char) c;
	return (b);
}
/* 
int	main(void)
{
	char b[] = "123456";
	char *p = ft_memset(b, 'z', 3);
	printf("%s", p);
	return (0);
}
 */