/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_req2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:38:30 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/14 17:21:19 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_s **a)
{
	t_s	*temp;

	temp = *a;
	*a = ft_lstnew(ft_lstlast(*a)->content);
	(*a)->next = temp;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_s **b)
{
	t_s	*temp;

	temp = *b;
	//printf("%d\n", temp->content);
	*b = ft_lstnew(ft_lstlast(*b)->content);
	//printf("%d\n",ft_lstlast(a)->content);
	(*b)->next = temp;
	write(1, "rrb\n", 4);
}

void	ra(t_s **a)
{
	t_s *temp;
	t_s *zort;

	temp = ft_lstnew((*a)->content);
	(*a) = (*a)->next;
	zort = ft_lstlast((*a)->next);
	zort->next = temp;
	write(1, "ra\n", 3);
}

void	rb(t_s **b)
{
	t_s *temp;
	t_s *zort;

	temp = ft_lstnew((*b)->content);
	(*b) = (*b)->next;
	zort = ft_lstlast((*b)->next);
	zort->next = temp;
	write(1, "rb\n", 3);
}
