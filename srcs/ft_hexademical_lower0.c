/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexademical_lower0.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:23:12 by spgibber          #+#    #+#             */
/*   Updated: 2021/11/12 17:23:14 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_get_length(unsigned int number, int size)
{
	int	len;

	len = 0;
	while (number > 0)
	{
		number = number / size;
		len ++;
	}
	return (len);
}

static char	*ft_string(char *str, char *base, unsigned int number, int len)
{
	int	i;

	i = 0;
	if (number == 0)
	{
		str[0] = 0;
		str[1] = '\0';
	}
	else
	{
		while (number > 0)
		{	
			str[len - i - 1] = base[number % 16];
			i++;
			number /= 16;
		}
		str[len] = '\0';
	}
	return (str);
}

char	*ft_hexademical_lower0(unsigned int number)
{
	char	*str;
	int		size;
	int		len;
	char	*base;

	size = 16;
	base = "0123456789abcdef";
	len = ft_get_length(number, size);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = ft_string(str, base, number, len);
	return (str);
}
