/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 15:26:09 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/16 15:35:10 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **link, void (*del)(void *, size_t))
{
	t_list	*next;

	while (*link)
	{
		next = (*link)->next;
		del((*link)->content, (*link)->content_size);
		free(*link);
		*link = next;
	}
}
