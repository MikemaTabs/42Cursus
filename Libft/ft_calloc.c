/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:15:07 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/02 17:30:37 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/* 
int	main(void)
{
	int *ptr;
	int i = 0;
	ptr = (int*) ft_calloc(3, 3);
	while (i++ < 3)
		printf("%d\n", ptr[i]);
	return (0);
}
 */