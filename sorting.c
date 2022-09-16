/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:05:08 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/16 14:01:50 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sortf3(t_s **a, t_s **b)
{
	if (minnumber(a)->content == (*a)->next->content)
	{
		sa(*a);
		if ((*a)->next->content < (*a)->next->next->content)
			return ;
	}
	else if (minnumber(a)->content == (*a)->content
		&& ((*a)->next->content > (*a)->next->next->content))
	{
		pb(a, b);
		sa(*a);
		pa(a, b);
	}
	else if (minnumber(a)->content == (*a)->next->next->content)
	{
		rra(a);
		if ((*a)->next->content < (*a)->next->next->content)
			return ;
		else
		{
			pb(a, b);
			sa(*a);
			pa(a, b);
		}
	}
}

t_s	*maxnumber(t_s **a)
{
	t_s *tmp;
	t_s *min;

	tmp = (*a);
	min = ft_lstnew(tmp->content);
	while (tmp->next)
	{
		if (tmp->content < tmp->next->content && min->content < tmp->next->content)
			min = ft_lstnew(tmp->next->content);
		tmp = tmp->next;
	}
	return (min);
}

int	flash(t_s **a, int num)
{
	int	res;
	float	div;

	div = (float)(num - minnumber(a)->content) / (float)(maxnumber(a)->content - minnumber(a)->content);
	res = 1 + (div * ft_lstlen(*a));
	return (res);
}

// void	flashsort()
// {

// }
