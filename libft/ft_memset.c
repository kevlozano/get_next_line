/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:42:23 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/11 18:12:42 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*proxy;

	proxy = (unsigned char*)str;
	i = 0;
	while (i < n)
	{
		proxy[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
