#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/* 
int	main(void)
{
    char str[] = "hola";
    ft_putendl_fd(str, 1);
    return (0);
}
 */