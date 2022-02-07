/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createinput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:10:47 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:10:47 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*createinput(int argc, char **argv, int *tab)
{
	t_list				*stack_a;
	t_list				*new;
	int					ind;

	ind = 1;
	stack_a = NULL;
	while (argc > 1)
	{
		tab[ind] = ft_atoi(argv[ind]);
		new = ft_lstnew(&tab[ind]);
		ft_lstadd_back(&stack_a, new);
		argc--;
		ind++;
	}
	return (stack_a);
}
