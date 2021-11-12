#include "../includes/ft_printf.h"

void	ft_putstr(char *s, int *n)
{
	if (!s)
		return ;
	*n += write(1, s, ft_strlen(s));
}
