# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include "library/ft_printf.h"

int	main(void)
{
	int				len;
	char			c;
	char			*string;
	int				nbr;
	int				ngbr;
	unsigned int 	unit;

	unit = -1;
	len = 0;
	c = 'Y';
	string = "Yes, strings are working 1234";
	nbr = 42;
	ngbr = -2147483647;
	len = ft_printf("characers: %c \n", c);
	printf("%i \n", len);
	len = printf("characers: %c \n", c);
	printf("%i \n", len);
	len = ft_printf("strings: %s \n", string);
	printf("%i \n", len);
	len = printf("strings: %s \n", string);
	printf("%i \n", len);
	len = ft_printf("decimal and integrers: %i \n", nbr);
	printf("%i \n", len);
	len = printf("decimal and integrers: %i \n", nbr);
	printf("%i \n", len);
	len = ft_printf("decimal and integrers: %i \n", ngbr);
	printf("%i \n", len);
	len = printf("decimal and integrers: %i \n", ngbr);
	printf("%i \n", len);
	len = ft_printf("hex: %x \n", nbr);
	printf("%i \n", len);
	len = printf("hex: %x \n", nbr);
	printf("%i \n", len);
	len = ft_printf("pointer: %p \n", string);
	printf("%i \n", len);
	len = printf("pointer: %p \n", string);
	printf("%i \n", len);
	len = ft_printf("percentage %% \n");
	printf("%i \n", len);
	len = printf("percentage %% \n");
	printf("%i \n", len);
	len = ft_printf("unsigned %u \n", unit);
	printf("%i \n", len);
	len = printf("unsigned %u \n", unit);
	printf("%i \n", len);
	len = ft_printf(" %d %d %d %d \n", INT_MAX, INT_MIN, 0, -42);
	printf("%i \n", len);
	len = printf(" %d %d %d %d \n", INT_MAX, INT_MIN, 0, -42);
	printf("%i \n", len);
}
