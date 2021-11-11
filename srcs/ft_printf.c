#include "../includes/ft_printf.h"

#include <stdio.h>

t_print	*ft_init(t_print *tab)
{
	// tab->wdt = 0;
	// tab->prc = 0;
	// tab->zero = 0;
	// tab->pnt = 0;
	// tab->dash = 0;
	tab->tl = 0;
	// tab->sign = 0;
	// tab->is_zero = 0;
	// tab->perc = 0;
	// tab->sp = 0;
	return (tab);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	t_print	*tab;
	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);///???-1
	ft_init(tab);
	va_start(tab->args, format);
	i = -1;
	len = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			ft_eval_format(tab, format, i + 1);
		else
			len += write(1, &format[i], 1);
	}
	va_end(tab->args);
	len += tab->tl;
	free(tab);
	return (len);
}
// format
// %->find_symblos:
// d-> va_arg(args, int)
// s-> va_arg(args, char *)
int main()
{
	int n = 0;
	printf("abcdef%c\n", 'a');
	n = ft_printf("2545%c", 'a');
}