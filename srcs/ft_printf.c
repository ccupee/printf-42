/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:24:43 by spgibber          #+#    #+#             */
/*   Updated: 2021/11/12 17:24:45 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
		return (-1);
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
