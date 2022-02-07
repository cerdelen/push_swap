/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:12:08 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:12:08 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*tab;

	if (!check_arguments(argc, argv) || !unvalid_value(argc, argv))
		return (write(2, "Error\n", 6));
	if (argc <= 2)
		return (0);
	if (check_for_initial_sort(argc, argv))
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	tab = malloc(sizeof(int) * (argc - 1));
	stack_a = createinput(argc, argv, tab);
	reapply_values(&stack_a, argc - 2);
	if (argc <= 6)
		sort_small(&stack_a, &stack_b, argc);
	else
		sortbigstack(&stack_a, &stack_b);
	return (free_remains(&stack_a, tab));
}


// new approach 
// main after if (argc <= 2) check if sorted einfach von den argv
// danach :
// if (argc <= 6)
// 		sort_small(&stack_a, &stack_b, argc);
// 	else
// 		sortbigstack(&stack_a, &stack_b);

// in reapplyvalues damit ich am ende einfach freen cann