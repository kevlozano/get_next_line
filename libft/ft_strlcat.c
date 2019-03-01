/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 11:23:08 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/12 14:46:36 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total_length;

	i = 0;
	j = 0;
	while ((dest[i] != '\0') && (i < size))
		i++;
	while (src[j] != '\0')
		j++;
	total_length = i + j;
	if (i + 1 >= size)
		return (total_length);
	j = 0;
	while ((src[j] != '\0') && (i < size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (total_length);
}
