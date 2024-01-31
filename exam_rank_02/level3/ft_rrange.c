#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *resultado;
	int i = 0;
	int step = 1;
	int n = end - start;

	if (n < 0)
		(n *= -1);
	n++;

	resultado = (int *)malloc(sizeof(int) * n);
	if (resultado)
	{
		if (start < end)
			step = -1;
		while (i < n)
		{
			resultado[i] = end;
			end += step;
			i++;
		}
	}
	return (resultado);
}
