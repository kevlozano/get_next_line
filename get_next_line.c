/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 13:08:12 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/26 16:46:06 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_line(int fd, char **s, char **line)
{
	char	*holder;
	int		i;

	i = 0;
	while (s[fd][i] != '\n' && s[fd][i] != '\0')
		i++;
	if ((holder = ft_strchr(s[fd], '\n')))
	{
		holder = ft_strdup(holder + 1);
		*line = ft_strsub(s[fd], 0, i);
		free(s[fd]);
		if (holder[0] != '\0')
			s[fd] = ft_strdup(holder);
		else
			s[fd] = NULL;
	}
	else
	{
		*line = ft_strdup(s[fd]);
		free(s[fd]);
		s[fd] = NULL;
	}
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	static char		*s[SIZE_LIMIT];
	int				ret;
	char			buf[BUFF_SIZE + 1];
	char			*holder;

	if (fd < 0)
		return (-1);
	while (((ret = read(fd, buf, BUFF_SIZE)) > 0))
	{
		buf[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		holder = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = holder;
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && s[fd] == NULL)
		return (0);
	return (get_line(fd, s, line));
}
