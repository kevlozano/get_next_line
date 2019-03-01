/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 19:13:08 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/18 19:35:44 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_list_last(t_list *begin_list)
{
	t_list *current;

	current = begin_list;
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (*current);
}
