/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_req2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:38:30 by muyazici          #+#    #+#             */
/*   Updated: 2023/01/12 17:08:23 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pop(t_s **stack)
{
	t_s	*iter;

	iter = (*stack);
	while (iter->next->next != NULL)
		iter = iter->next;
	iter->next = NULL;
}

void	rra(t_s **a)
{
	t_s *first;
	t_s	*iter;

	first = ft_lstlast(*a);
	iter = (*a);
	pop(a);
	first->next = *a;
	(*a) = first;
	write(1, "rra\n", 4);
}

void	rrb(t_s **b)
{
	t_s	*temp;

	temp = *b;
	*b = ft_lstnew(ft_lstlast(*b)->content, (*b)->rank);
	(*b)->next = temp;
	ft_lstend(*b);
	write(1, "rrb\n", 4);
}

void	ra(t_s **a)
{
	t_s	*temp;
	t_s	*last;

	last = ft_lstlast(*a);
	temp = (*a);
	(*a) = (*a)->next;
	last->next = temp;
	temp->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_s **b)
{
	t_s	*temp;
	t_s	*zort;

	temp = ft_lstnew((*b)->content, (*b)->rank);
	(*b) = (*b)->next;
	zort = ft_lstlast((*b)->next);
	zort->next = temp;
	write(1, "rb\n", 3);
}
