#include "../includes/ft_printf.h"

void	ft_putchar(char c, int *n)
{
	*n += write (1, &c, 1);
}
