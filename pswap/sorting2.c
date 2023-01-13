/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:49:36 by muyazici          #+#    #+#             */
/*   Updated: 2023/01/13 14:19:51 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	big_bit(t_s *a)
{
	int ret;

	ret = 0;
	while (a->rank != 0)
	{
		a->rank >>= 1;
		ret++;
	}
	return (ret);
}

int	is_sorted(t_s *a)
{
	while (a->next)
	{
		if (a->content < a->next->content)
			a = a->next;
		else
			return (0);
	}
	return (1);
}

void	upperhundered(t_s **a, t_s **b)
{
	int	i;
	int	j;

	i = 0;
	int	max_bit;
	int	size;

	max_bit = big_bit(maxnumber(a));
	size = ft_lstlen(*a);
	while (i < max_bit)
	{
		j = 0;
		if (is_sorted(*a))
			break ;
		while (j < size)
		{
			if ((((*a)->rank >> i) & 1) != 0)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		pallb(a, b);
		i++;
	}
}

void	sortf5(t_s **a, t_s **b)
{
	int	alen;

	alen = ft_lstlen(*a);
	while (alen > 3)
	{
		firstmin(a, minnumber(a), b);
		alen--;
	}
	sortf3(a);
	pallb(a, b);
}
