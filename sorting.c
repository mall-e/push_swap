/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:05:08 by muyazici          #+#    #+#             */
/*   Updated: 2022/11/01 14:03:25 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sortf3(t_s **a, t_s **b)
{
	if (ft_lstlen(*a) == 2)
	{
		if (minnumber(a)->content != (*a)->content)
			sa(*a);
	}
	else if (minnumber(a)->content == (*a)->next->content)
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
		if ((*a)->content < (*a)->next->content)
			rra(a);
		else
		{
			ra(a);
			ra(a);
		}
	}
}

void	ranking(t_s **a)
{
	t_s	*tmp;
	t_s	*tmp2;
	t_s	*tmp3;

	tmp = *a;
	tmp2 = *a;
	tmp3 = *a;
	while (*a)
	{
		tmp = tmp2;
		while(tmp)
		{
			if ((*a)->content >= tmp->content)
				(*a)->rank++;
			tmp = tmp->next;
		}
		*a = (*a)->next;
	}
	*a = tmp3;
}

t_s	*maxnumber(t_s **b)
{
	t_s	*tmp;
	t_s	*max;

	tmp = (*b);
	max = ft_lstnew(tmp->content, tmp->rank);
	while (tmp->next)
	{
		if (tmp->content < tmp->next->content && max->content < tmp->next->content)
			max = ft_lstnew(tmp->next->content, tmp->next->rank);
		tmp = tmp->next;
	}
	return (max);
}

void	firstmax(t_s **a, t_s *max, t_s **b)
{
	t_s	*tmp;
	int	i;
	int	c;

	i = 0;
	c = 0;
	tmp = (*b);
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	tmp = (*b);
	while (tmp->content != max->content)
	{
		c++;
		tmp = tmp->next;
	}
	if (c <= i - c)
	{
		while (c)
		{
			rb(b);
			c--;
		}
	}
	else
	{
		c = i - c + 1;
		if (c == 0)
			c = 1;
		while (c)
		{
			rrb(b);
			c--;
		}
	}
	pa(a, b);
}
