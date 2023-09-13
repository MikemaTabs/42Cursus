/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:16:54 by fbascuna          #+#    #+#             */
/*   Updated: 2023/09/13 16:36:53 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	z;

	z = 0;
	while (s[z])
		z++;
	return (z);
}
/*
int	main(void)
{
	printf("%ld\n", ft_strlen("aaaaaaaa"));
	return (0);
}
*/