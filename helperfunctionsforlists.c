/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helperfunctionsforlists.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:11:28 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:11:28 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freecontent(void *ptr)
{
	free(ptr);
}

void	free_elements(t_list **stack_a)
{
	t_list	*ptr;

	while (*stack_a)
	{
		ptr = (*stack_a)->next;
		free(*stack_a);
		(*stack_a) = ptr;
	}
}

int	free_remains(t_list **stack_a, int *tab)
{
	free_elements(stack_a);
	free(tab);
	return (0);
}
