#include "../includes/ft_printf.h"

void	ft_putchar_fd(char c, int *n)
{
	*n = write (1, &c, 1);
}

void	ft_eval_format(t_print *tab, const char *format, int n, int* kol)
{
	if (format[n] == 'c')
		ft_putchar_fd((char)va_arg(tab->args), int), kol)
	// 	if (format[++pos] == 'c' && format[pos])
	// 	{
	// 		ft_putchar_fd((char)(va_arg(tab->args, int)), n);	
	// 	}	
	// return (n);
}