/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:43:56 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/15 18:45:19 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *dest_copy;

	dest_copy = dest;
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n)
		{
			((char *)dest)[n - 1] = ((char*)src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest_copy);
}
