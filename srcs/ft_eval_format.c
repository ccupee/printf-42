#include "../includes/ft_printf.h"

int	ft_eval_format(t_print *tab, const char *format, int n, int* kol)
{
	if (format[n] == 'c')
		ft_putchar((char)va_arg(tab->args, int), kol);
	if (format[n] == 's')
		ft_putstr((char *)va_arg(tab->args, int *), kol);
	if (format[n] == 'd' || format[n] == 'i')
		ft_putnbr_int(va_arg(tab->args, int), kol);
	if (format[n] == 'u')
		ft_putnbr_unsigned(va_arg(tab->args, unsigned int), kol);
	if (format[n] == 'p')
		ft_putpointer((unsigned long)va_arg(tab->args, void *), kol);
	if (format[n] == 'x')
		ft_putx(va_arg(tab->args, unsigned int), kol);
	if (format[n] == 'X')
		ft_put_x(va_arg(tab->args, unsigned int), kol);
	if (format[n] == '%')
		ft_putchar(37, kol);
	return (n);
}
