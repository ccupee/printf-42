#include "../includes/ft_printf.h"

// #include <stdio.h>

t_print	*ft_init(t_print *tab)
{
	tab->tl = 0;
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
			i = ft_eval_format(tab, format, i + 1, &(tab->tl));
		else
			len += write(1, &format[i], 1);
	}
	va_end(tab->args);
	len += tab->tl;
	free(tab);
	return (len);
}

// int main()
// {
// 	// int n = 0;
// 	// printf("%s\n", "Real:");
// 	// int k = printf("0000\n%c\n%u\n", 'a', 4294967294);
// 	// printf("%s\n", "Mine:");
// 	// n = ft_printf("0000\n%c\n%u\n", 'a', 4294967294);
// 	// printf("%s\n", "Return values:");
// 	// printf("%d\n", n);
// 	// printf("%d\n", k);
// 	// void *arr;
// 	// int a1 = printf("%p\n", arr);
// 	// int a2 = ft_printf("%p\n", arr);
// 	int a = printf("%X\n%%\n", 117213);
// 	int b = ft_printf("%X\n%%\n", 117213);
// 	printf("%d %d", a, b);
// }