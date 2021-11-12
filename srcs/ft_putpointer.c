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

	str = ft_hexademical_lower(value);
	write(1, "0x", 2);
	*n += write(1, str, ft_strlen(str)) + 2;
}
