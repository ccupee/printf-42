#include "../includes/ft_printf.h"

void	ft_putpointer(unsigned long value, int *n)
{
	char	*str;

	str = ft_hexademical_lower(value);
	write(1, "0x", 2);
	*n += write(1, str, ft_strlen(str)) + 2;
}
