/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 15:45:46 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/16 15:53:20 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*result;
	t_list		*head;
	t_list		*elem;

	elem = f(lst);
	if (!(result = ft_lstnew(elem->content, elem->content_size)))
		return (NULL);
	lst = lst->next;
	head = result;
	while (lst)
	{
		elem = f(lst);
		if (!(result->next = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
		result = result->next;
		lst = lst->next;
	}
	return (head);
}
