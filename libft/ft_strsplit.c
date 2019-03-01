/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:44:21 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/18 10:31:13 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	nowords(char const *s, char c)
{
	int		i;
	int		wc;
	int		word;

	i = 0;
	word = 0;
	wc = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && word == 0)
		{
			wc++;
			word = 1;
		}
		if (s[i] == c && word == 1)
			word = 0;
		i++;
	}
	return (wc);
}

static char	*ft_strdup_special(char const *str, char c)
{
	int		len;
	char	*str2;
	int		i;

	len = ft_strlen(str);
	str2 = (char*)malloc((len + 1) * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		j;
	int		words;

	if (!s || !c)
		return (NULL);
	j = 0;
	words = nowords(s, c);
	ret = (char **)malloc(sizeof(char*) * (words + 1));
	if (!ret)
		return (NULL);
	while (*s != '\0' && j < words)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s == '\0')
			break ;
		ret[j] = ft_strdup_special(s, c);
		while (*s != c && *s != '\0')
			s++;
		j++;
	}
	ret[j] = NULL;
	return (ret);
}
