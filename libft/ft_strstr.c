/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 10:15:59 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/13 10:39:34 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		n = 0;
		while (to_find[n] == str[i + n])
		{
			if (to_find[n + 1] == '\0')
			{
				return (str + i);
			}
			n++;
		}
		i++;
	}
	return (0);
}
