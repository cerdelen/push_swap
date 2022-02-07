/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_pa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:12:25 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:12:25 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*firstelem;

	if (ft_lstsize(*stack_b) > 0)
	{
		firstelem = *stack_b;
		*stack_b = firstelem ->next;
		ft_lstadd_front(stack_a, firstelem);
	}
	write(1, "pa\n", 3);
}
