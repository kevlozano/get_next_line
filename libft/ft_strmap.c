/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 10:17:16 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/18 10:01:41 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*newstr;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (0);
	if (s && f)
	{
		while (s[i])
		{
			newstr[i] = f(s[i]);
			i++;
		}
		newstr[i] = '\0';
		return (newstr);
	}
	return (0);
}
