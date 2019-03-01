/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 10:00:26 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/13 10:40:56 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	while (i >= 0)
	{
		if (*str == (char)c)
			return ((char *)str);
		i--;
		str--;
	}
	return (NULL);
}
