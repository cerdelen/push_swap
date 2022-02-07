/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:11:03 by Cerdelen          #+#    #+#             */
/*   Updated: 2022/02/04 21:11:03 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

static int	checksign(const char *ptr)
{
	if (ptr[0] == '+')
		return (1);
	if (ptr[0] == '-')
		return (2);
	return (0);
}

static long	makenumber(int i, const char *start)
{
	int		x;
	long	nmb;

	nmb = 0;
	x = 1;
	while (i > -1)
	{	
		nmb -= (start[i] - 48) * x;
		x *= 10;
		i--;
	}
	return (nmb);
}

long	ft_atolong(const char *nptr)
{
	long		nmb;
	int			i;
	const char	*start;
	int			sign;

	nmb = 0;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	sign = checksign(&nptr[i]);
	if (sign > 0)
		i++;
	start = (const char *) nptr + i;
	i = 0;
	while (ft_isdigit(start[i]) == 1)
		i++;
	i--;
	nmb = makenumber(i, start);
	if (sign == 0 || sign == 1)
		nmb = nmb * (-1);
	return (nmb);
}
