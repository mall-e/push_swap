/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:49:36 by muyazici          #+#    #+#             */
/*   Updated: 2022/10/26 15:20:28 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int big_bit(t_s *a)
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

int is_sorted(t_s *a)
{
	while(a->next)
	{
		if (a->content < a->next->content)
			a = a->next;
		else
			return (0);
	}
	return (1);
}

void	upperhundered(t_s **a, t_s **b, int ac)
{
	int	i;
	int	j;
	//t_s	*tmp;

	i = 0;
	//tmp = *a;
	(void)ac;
	int max_bit = big_bit(maxnumber(a));
	int size = ft_lstlen(*a);
	while(i < max_bit)
	{
		j = 0;
		if (is_sorted(*a))
			break;
		while(j < size)
		{
			if ((((*a)->rank >> i) & 1) != 0)
				ra(a);
			else
				pb(a,b);
			j++;
		}
		pallb(a, b);
		i++;
	}
	// while (i < 3)
	// {
	// 	j = 0;
	// 	while (j < ft_lstlen(*a))
	// 	{
	// 		if((((*a)->rank >> i) & 1) == 0)
	// 		{
	// 			//printf("burada %d\n", (*a)->rank);
	// 			pb(a,b);
	// 		}
	// 		else
	// 			ra(a);
	// 		j++;
	// 	}
	// 	pallb(a,b);
	// 	i++;
	// }
}

// 2 4 1 5 3
// 4 1 5 2 3
// 1 2 3 4 5
