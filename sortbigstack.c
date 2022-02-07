/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortbigstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:29:53 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:29:53 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **stack_x)
{
	t_list	*ptr;
	int		temp;

	temp = -1;
	ptr = *stack_x;
	while (ptr)
	{
		if ((*(int *)(ptr->content)) < temp)
			return (0);
		temp = (*(int *)(ptr->content));
		ptr = ptr->next;
	}
	return (1);
}

int	stack_empty(t_list **stack_x)
{
	if (*stack_x == NULL)
		return (1);
	return (0);
}

int	sorting_helper(int i, int size, t_list **stack_a, t_list **stack_b)
{
	int	*temp;
	int	j;

	j = 0;
	while (j < size)
	{
		temp = (int *)(*stack_a)->content;
		if (((*temp >> i) & 1) == 1)
			operation_ra(stack_a);
		else
			operation_pb(stack_a, stack_b);
		j++;
	}
	return (j);
}

int	sortbigstack(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	max_num;
	int	max_bits;
	int	i;

	size = ft_lstsize(*stack_a);
	max_num = size - 1;
	max_bits = 0;
	i = 0;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	while (i < max_bits && !is_sorted(stack_a))
	{
		sorting_helper(i, size, stack_a, stack_b);
		while (!stack_empty(stack_b))
			operation_pa(stack_a, stack_b);
		i++;
	}
	return (0);
}
