/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:05:08 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/28 17:15:45 by muyazici         ###   ########.fr       */
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

void	ranking(t_s *a)
{
	t_s	*tmp;
	t_s	*tmp2;

	tmp = a;
	tmp2 = a;
	while (a)
	{
		tmp = tmp2;
		while(tmp)
		{
			if (a->content >= tmp->content)
				a->rank++;
			tmp = tmp->next;
		}
		a = a->next;
	}
}

t_s	*maxnumber(t_s **b)
{
	t_s	*tmp;
	t_s	*max;

	tmp = (*b);
	max = ft_lstnew(tmp->content);
	while (tmp->next)
	{
		if (tmp->content < tmp->next->content && max->content < tmp->next->content)
			max = ft_lstnew(tmp->next->content);
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

void	lowerforty(t_s **a, t_s **b, int ac)
{
	int	i;
	t_s	*tmp;

	tmp = *a;
	i = 40;
	if (ac < 40)
		return ;
	while (i <= ac)
	{
		tmp = *a;
		while (tmp)
		{
			if (tmp->rank <= i)
				pb(a, b);
			else
				ra(a);
			tmp = tmp->next;
		}
		i+= 40;
	}
	i -= 40;
	while (i)
	{
		firstmax(a,maxnumber(b),b);
		i--;
	}
}
