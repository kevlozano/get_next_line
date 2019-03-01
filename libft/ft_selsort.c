/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:31:41 by klozano-          #+#    #+#             */
/*   Updated: 2019/02/18 11:49:24 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_selsort(int *arr, int n)
{
	int	i;
	int	j;
	int min;

	i = 0;
	while (i < n - 1)
	{
		min = i;
		j = i + 1;
		while (j < n)
		{
			if (arr[j] < arr[min])
				min = j;
			j++;
		}
		ft_swap(&arr[min], &arr[i]);
		i++;
	}
}
