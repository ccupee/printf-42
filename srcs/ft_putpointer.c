/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:27:28 by spgibber          #+#    #+#             */
/*   Updated: 2021/11/12 17:27:30 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putpointer(unsigned long value, int *n)
{
	char	*str;

	*n += write(1, "0x", 2);
	if (value == 0)
		*n += write(1, "0", 1);
	else
	{
		str = ft_hexademical_lower(value);
		*n += write(1, str, ft_strlen(str));
		free(str);
	}
}
