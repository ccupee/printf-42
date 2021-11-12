/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:27:10 by spgibber          #+#    #+#             */
/*   Updated: 2021/11/12 17:27:12 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// static long	ft_abs(unsigned int n)
// {
// 	if (n < 0)
// 		return (n * (-1));
// 	else
// 		return (n);
// }	

static int	ft_count(unsigned int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static int	ft_power(int n)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < n)
	{
		result *= 10;
		i++;
	}
	return (result);
}

static void	ft_check(unsigned int n)
{
	char	c;

	c = 0;
	if (n < 9 && n > 0)
	{
		c = n + '0';
		write (1, &c, 1);
	}
	else if (n == 0)
		write (1, "0", 1);
}	

void	ft_putnbr_unsigned(unsigned int n, int *kol)
{
	char			c;
	int				count;
	int				i;
	unsigned int	value;

	c = 0;
	i = 0;
	value = n;
	count = ft_count(value);
	if (value < 9 && value >= 0)
		ft_check(value);
	else
	{
		while (i < count)
		{
			c = (value / ft_power(count - i - 1)) + '0';
			value = value % ft_power(count - i - 1);
			*kol += write (1, &c, 1);
			i++;
		}	
	}
}
