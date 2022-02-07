/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_ra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:13:16 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:13:16 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_ra(t_list **stack_a)
{
	t_list	*firstelem;

	firstelem = *stack_a;
	*stack_a = firstelem->next;
	firstelem->next = NULL;
	ft_lstadd_back(stack_a, firstelem);
	write(1, "ra\n", 3);
}
