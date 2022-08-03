/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:19:06 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:19:06 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_3(t_list **stack_a)
{
	t_list	*ptr;
	int		first;
	int		third;
	int		second;

	ptr = *stack_a;
	first = *(int *)ptr->content;
	ptr = ptr->next;
	second = *(int *)ptr->content;
	ptr = ptr->next;
	third = *(int *)ptr->content;
	if (second > first && third > second)
		return (0);
	if (third > first && second > third)
		return (case_1_of_3_value_permutation(stack_a));
	if (first > second && third > first)
		return (case_2_of_3_value_permutation(stack_a));
	if (first > third && second > first)
		return (case_3_of_3_value_permutation(stack_a));
	if (third > second && first > third)
		return (case_4_of_3_value_permutation(stack_a));
	else
		return (case_5_of_3_value_permutation(stack_a));
}

int	sort_4(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr;
	int		value;

	while (ft_lstsize(*stack_a) > 3)
	{
		ptr = *stack_a;
		value = *(int *)ptr->content;
		if (value == 0)
			operation_pb(stack_a, stack_b);
		else
			operation_ra(stack_a);
	}
	sort_3(stack_a);
	operation_pa(stack_a, stack_b);
	return (0);
}

int	sort_5(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr;
	int		value;

	while (ft_lstsize(*stack_a) > 3)
	{
		ptr = *stack_a;
		value = *(int *)ptr->content;
		if (value == 1 || value == 0)
			operation_pb(stack_a, stack_b);
		else
			operation_ra(stack_a);
	}
	sort_3(stack_a);
	ptr = *stack_b;
	value = *(int *)ptr->content;
	if (value == 0)
		operation_sb(stack_b);
	operation_pa(stack_a, stack_b);
	operation_pa(stack_a, stack_b);
	return (0);
}

int	sort_small(t_list **stack_a, t_list **stack_b, int argc)
{
	int		temp;
	t_list	*ptr;

	ptr = *stack_a;
	if (argc == 3)
	{
		temp = *(int *)ptr->content;
		ptr = ptr->next;
		if (temp > *(int *)ptr->content)
			operation_sa(stack_a);
	}
	if (argc == 4)
		sort_3(stack_a);
	if (argc == 5)
		sort_4(stack_a, stack_b);
	if (argc == 6)
		sort_5(stack_a, stack_b);
	return (0);
}
