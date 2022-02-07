/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_pb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:12:32 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:12:32 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*firstelem;

	if (ft_lstsize(*stack_a) > 0)
	{
		firstelem = *stack_a;
		*stack_a = firstelem ->next;
		ft_lstadd_front(stack_b, firstelem);
	}
	write(1, "pb\n", 3);
}
