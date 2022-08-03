/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:10:50 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/03/08 14:10:50 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg_value_part2(char *nbr, int i)
{
	if (nbr[i] > '7')
		return (0);
	i++;
	if (nbr[i] > '4')
		return (0);
	i++;
	if (nbr[i] > '8')
		return (0);
	i++;
	if (nbr[i] > '3')
		return (0);
	i++;
	if (nbr[i] > '6')
		return (0);
	i++;
	if (nbr[i] > '4')
		return (0);
	i++;
	if (nbr[i] <= '7' || (nbr[0] == '-' && nbr[i] == '8'))
		return (1);
	return (0);
}

int	check_arg_value(char *nbr)
{
	int	a;
	int	i;

	i = 0;
	a = ft_strlen(nbr);
	if (a > 11 || (a == 11 && nbr[0] != '-'))
		return (0);
	if (a < 10 || (a < 11 && nbr[0] == '-'))
		return (1);
	if (nbr[0] == '-')
		i++;
	if (nbr[i] > '2')
		return (0);
	i++;
	if (nbr[i] > '1')
		return (0);
	i++;
	if (nbr[i] > '4')
		return (0);
	i++;
	return (check_arg_value_part2(nbr, i));
}

int	unvalid_value(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!check_arg_value(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_arguments(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (0);
			j++;
		}
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_for_initial_sort(int argc, char **argv)
{
	int	i;
	int	temp;

	i = 1;
	temp = ft_atoi(argv[i]);
	while (i < (argc - 1))
	{
		i++;
		if (temp > ft_atoi(argv[i]))
			return (0);
		temp = ft_atoi(argv[i]);
	}
	return (1);
}
