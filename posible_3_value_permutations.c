/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   posible_3_value_permutations.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:15:12 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:15:12 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_1_of_3_value_permutation(t_list **stack_a)
{
	operation_sa(stack_a);
	operation_ra(stack_a);
	return (0);
}

int	case_2_of_3_value_permutation(t_list **stack_a)
{
	operation_sa(stack_a);
	return (0);
}

int	case_3_of_3_value_permutation(t_list **stack_a)
{
	operation_rra(stack_a);
	return (0);
}

int	case_4_of_3_value_permutation(t_list **stack_a)
{
	operation_ra(stack_a);
	return (0);
}

int	case_5_of_3_value_permutation(t_list **stack_a)
{
	operation_sa(stack_a);
	operation_rra(stack_a);
	return (0);
}
