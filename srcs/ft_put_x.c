#include "../includes/ft_printf.h"

void	ft_put_x(unsigned int number, int *n)
{
	char *str;

	str = ft_hexademical_upper(number);
	*n += write(1, str, ft_strlen(str));
}
