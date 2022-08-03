/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_sb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:14:50 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:14:50 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_sb(t_list **stack_b)
{
	t_list	*firstelement;
	t_list	*secondelement;
	t_list	*thirdelement;

	if (ft_lstsize(*stack_b) > 1)
	{
		firstelement = *stack_b;
		secondelement = firstelement ->next;
		thirdelement = secondelement ->next;
		secondelement->next = firstelement;
		firstelement->next = thirdelement;
		*stack_b = secondelement;
	}
	write(1, "sb\n", 3);
}
