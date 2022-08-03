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

void	print_2d_array(char	**arr, int fd)
{
	int	i;

	i = 0;
	if (arr)
	{
		while (arr[i] != NULL)
		{
			ft_putstr_fd(arr[i], fd);
			if (arr[i][ft_strlen(arr[i]) - 1] != '\n')
				ft_putchar_fd('\n', fd);
			i++;
		}
	}
}

void	print_lst_content_int(void *content)
{
	printf("%i\n", 	*((int *)content));
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*tab;

	if (!check_arguments(argc, argv) || !unvalid_value(argc, argv))
		return (write(STDERR_FILENO, "Error\n", 6));
	if (argc <= 2)
		return (0);
	if (check_for_initial_sort(argc, argv))
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	tab = malloc(sizeof(int) * (argc - 1));
	stack_a = createinput(argc, argv, tab);
	reapply_values(&stack_a, argc - 1);
	if (argc <= 6)
		sort_small(&stack_a, &stack_b, argc);
	else
		sortbigstack(&stack_a, &stack_b);
	
	// printf("\nlist a \n\n");
	// ft_lstiter(stack_a, print_lst_content_int);
	// printf("\nlist b \n\n");
	// ft_lstiter(stack_b, print_lst_content_int);


	return (free_remains(&stack_a, &stack_b, tab));
}
