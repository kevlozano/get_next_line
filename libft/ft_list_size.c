/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 19:11:05 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/18 19:33:54 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*current;
	int		count;

	count = 0;
	current = begin_list;
	while (current->next != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
