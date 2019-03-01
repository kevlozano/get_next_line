/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:30:33 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/15 18:48:03 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	while (i < n)
	{
		*dest2 = *src2;
		if (*src2 == (char)c)
		{
			return (dest + i + 1);
		}
		dest2++;
		src2++;
		i++;
	}
	return (NULL);
}
