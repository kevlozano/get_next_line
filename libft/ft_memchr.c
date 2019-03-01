/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 13:03:21 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/14 12:21:04 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	c2;
	int				i;

	i = 0;
	c2 = (unsigned char)c;
	s2 = (unsigned char *)s;
	while (n)
	{
		if (*(s2 + i) == c2)
			return (s2 + i);
		i++;
		n--;
	}
	return (NULL);
}
