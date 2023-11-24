/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:47:53 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/24 16:17:36 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen (s1) + 1;
	s2 = malloc (len);
	if (!s2)
		return (0);
	ft_memcpy (s2, s1, len);
	return (s2);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buff_line;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buff_line = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	
}
