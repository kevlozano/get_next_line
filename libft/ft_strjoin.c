/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 11:31:07 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/18 10:44:24 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		len2;
	int		i;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = -1;
	if (!(newstr = (char *)malloc(sizeof(char) * (len + len2 + 1))))
		return (NULL);
	while (++i < len)
		newstr[i] = s1[i];
	while (i < len + len2)
	{
		newstr[i] = *s2;
		i++;
		s2++;
	}
	newstr[i] = '\0';
	return (newstr);
}
