#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_print
{
	va_list	args;
	int		tl;
}				t_print;

int		ft_printf(const char *format, ...);
int		ft_eval_format(t_print *tab, const char *format, int n, int *kol);
void	ft_putnbr_int(int n, int *kol);
size_t	ft_strlen(const char *str);
void	ft_putstr(char *s, int *n);
void	ft_putchar(char c, int *n);
void	ft_putnbr_unsigned(unsigned int n, int *kol);
char	*ft_hexademical_lower(unsigned long number);
void	ft_putpointer(unsigned long value, int *n);
char	*ft_hexademical_upper(unsigned int number);
void	ft_putx(unsigned int number, int *n);
char	*ft_hexademical_lower0(unsigned int number);
void	ft_put_x(unsigned int number, int *n);

#endif