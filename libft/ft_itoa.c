/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 12:05:37 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/16 15:59:55 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		lenofn(int n)
{
	int		len;
	long	nb;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void		negative(int *n, char *ret)
{
	if (*n < 0)
	{
		*n *= -1;
		*ret = '-';
	}
}

char			*ft_itoa(int n)
{
	char	*ret;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = lenofn(n);
	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ret[len] = '\0';
	if (n == 0)
	{
		ret[0] = 48;
		return (ret);
	}
	negative(&n, ret);
	while (n > 0)
	{
		ret[--len] = '0' + (n % 10);
		n /= 10;
	}
	return (ret);
}
