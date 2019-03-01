/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 10:59:13 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/18 10:43:52 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && (i + 1 < n))
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
