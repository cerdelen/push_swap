/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:13:28 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:13:28 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_rb(t_list **stack_b)
{
	t_list	*firstelem;

	firstelem = *stack_b;
	*stack_b = firstelem->next;
	firstelem->next = NULL;
	ft_lstadd_back(stack_b, firstelem);
	write(1, "rb\n", 3);
}
