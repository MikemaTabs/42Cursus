#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start)) + 1;
	int *resultado = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start < end)
		{
			resultado[i] = start;
			start++;
			i++;
		}
		else
		{
			resultado[i] = start;
			start--;
			i++;
		}
	}
		return (resultado);
}
