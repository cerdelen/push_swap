/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reapply_values.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:18:10 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:18:10 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_of_sorted_arr(int *arr, int value, int max)
{
	int	i;

	i = 0;
	while (i < max)
	{
		if (value == arr[i])
			return (i);
		i++;
	}
	return (i);
}

void	sort_arr(int *arr_a, int max)
{
	int	i;
	int	temp;

	i = 0;
	while (i < max)
	{
		i++;
		if (arr_a[i] < arr_a[i - 1])
		{
			temp = arr_a[i];
			arr_a[i] = arr_a[i - 1];
			arr_a[i - 1] = temp;
			i = 0;
		}
	}
}

void	reapply_values(t_list **stack_x, int max)
{
	t_list	*ptr;
	int		*arr;
	int		i;
	int		*lel;

	i = 0;
	arr = malloc(max * sizeof(int));
	ptr = *stack_x;
	while (ptr)
	{
		arr[i] = *((int *)ptr->content);
		i++;
		ptr = ptr->next;
	}
	sort_arr(arr, max);
	ptr = *stack_x;
	while (ptr)
	{
		lel = ptr->content;
		*lel = index_of_sorted_arr(arr, *((int *)ptr->content), max);
		ptr = ptr->next;
	}
	free(arr);
}
