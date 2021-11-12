#include "../includes/ft_printf.h"

void	ft_putx(unsigned int number, int *n)
{
	char *str;

	str = ft_hexademical_lower0(number);
	*n += write(1, str, ft_strlen(str));
}
