/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:14:02 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:14:02 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*secondtolast;
	int		length;

	length = ft_lstsize(*stack_a);
	if (length > 1)
	{
		secondtolast = *stack_a;
		while (length > 2)
		{
			secondtolast = secondtolast -> next;
			length--;
		}
		last = secondtolast -> next;
		secondtolast -> next = NULL;
		ft_lstadd_front(stack_a, last);
	}
	write(1, "rra\n", 4);
}
