/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 13:16:16 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/13 13:23:10 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1c;
	const unsigned char *s2c;

	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n)
	{
		if (*s1c == *s2c)
		{
			s1c++;
			s2c++;
		}
		else
			return (*s1c - *s2c);
		n--;
	}
	return (0);
}
