/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:47:53 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/27 18:06:00 by fbascuna         ###   ########.fr       */
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

static char	ft_cpyfile_to_backup(int fd, char *buff_line, char *backup)
{
	int		read_line;
	char	*temp;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, buff_line, BUFFER_SIZE);
		if (read_line == -1)
			return (0);
		else if (read_line == 0)
			break ;
		buff_line[read_line] = '\0';
		if (!backup)
			backup = ft_strdup("");
		temp = backup;
		backup = ft_strjoin(temp, buff_line);
		free(temp);
		temp = NULL;
		if (ft_strchr(buff_line, '\n') && ft_strchr(buff_line, '\0'))
			break ;
		else if (ft_strchr(buff_line, '\n'))
			break ;
	}
	return (backup);
}

static char	*ft_extract_line(char *line)
{
	size_t	count;
	char	*backup;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (count == ft_strlen(line) - 1)
		return (0);
	if (line[count] == '\0' || line[1] == '\0')
		return (0);
	backup = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (backup[0] == '\0')
	{
		free(backup);
		backup = NULL;
	}
	line[count + 1] = '\0';
	return (backup);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buff_line;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buff_line = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff_line)
		return (0);
	line = ft_cpyfile_to_backup(fd, buff_line, backup);
	free(buff_line);
	if (!line)
	{
		free(backup);
		backup = NULL;
		return (0);
	}
	backup = ft_extract_line(char *line);
	return (line);
}
/*
int main(void)
{
	int	fd;
	fd = open("test.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}
*/