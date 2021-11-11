#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct s_print
{
	va_list	args;
	// int		wdt;
	// int		prc;
	// int		zero;
	// int		pnt;
	// int		dash;
	// int		st;
	int		tl;
	// int		sign;
	// int		is_zero;
	// int		perc;
	// int		sp;
}				t_print;

int	ft_printf(const char *format, ...);
int	ft_eval_format(t_print *tab, const char *format, int n);

#endif