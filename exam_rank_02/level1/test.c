#include <unistd.h>

void	ft_putchar_n(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}
