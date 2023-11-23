/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:47:53 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/23 17:10:03 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*get_next_line(int fd)
{
	char		*line;
	char		*buff_line;
	static char	*backup;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buff_line = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	
}