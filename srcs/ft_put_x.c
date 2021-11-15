/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:25:14 by spgibber          #+#    #+#             */
/*   Updated: 2021/11/12 17:25:16 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_put_x(unsigned int number, int *n)
{
	char	*str;

	if (number == 0)
		*n += write(1, "0", 1);
	else
	{
		str = ft_hexademical_upper(number);
		*n += write(1, str, ft_strlen(str));
		free(str);
	}
}
