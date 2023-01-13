/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:05:08 by muyazici          #+#    #+#             */
/*   Updated: 2023/01/12 15:15:43 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sortf3_2(t_s **a, t_s **b);

void	sortf3(t_s **mmtlist)
{
	int	a;
	int	b;
	int	c;

	a = (*mmtlist)->content;
	b = (*mmtlist)->next->content;
	c = (*mmtlist)->next->next->content;
	if (a > b && a > c && c > b)
		ra(mmtlist);
	else if (b > a && b > c && c > a)
	{
		rra(mmtlist);
		sa(mmtlist);
	}
	else if (b > a && b > c && a > c)
		rra(mmtlist);
	else if (a > b && a > c && b > c)
	{
		sa(mmtlist);
		rra(mmtlist);
	}
	else if (c > a && c > b && a > b)
		sa(mmtlist);
}

int	min_index(t_s *list, int data)
{
	int		i;

	i = 0;
	while (list != NULL)
	{
		if (data >= list->content && list != NULL)
			i++;
		list = list->next;
	}
	return (i);
}

void	ranking(t_s **a)
{
	t_s *temp;
	t_s *temp2;

	temp = *a;
	temp2 = temp;
	while (temp)
	{
		temp->rank = min_index(*a, temp->content);
		temp = temp->next;
	}
}

t_s	*maxnumber(t_s **b)
{
	t_s	*tmp;
	t_s	*max;

	tmp = (*b);
	max = ft_lstnew(tmp->content, tmp->rank);
	while (tmp->next)
	{
		if (tmp->content < tmp->next->content
			&& max->content < tmp->next->content)
			max = ft_lstnew(tmp->next->content, tmp->next->rank);
		tmp = tmp->next;
	}
	return (max);
}

void	sortf3_2(t_s **a, t_s **b)
{
	if (minnumber(a)->content == (*a)->content
		&& ((*a)->next->content > (*a)->next->next->content))
	{
		pb(a, b);
		sa(a);
		pa(a, b);
	}
	else if (minnumber(a)->content == (*a)->next->next->content)
	{
		if ((*a)->content < (*a)->next->content)
			rra(a);
		else
		{
			sa(a);
			rra(a);
		}
	}
}
