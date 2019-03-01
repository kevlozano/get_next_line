/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 18:13:41 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/12 14:58:51 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
