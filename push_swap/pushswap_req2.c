/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_req2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:38:30 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/08 17:10:26 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_s **a)
{
	t_s	*temp;

	temp = *a;
	//printf("%d\n", temp->content);
	*a = ft_lstnew(ft_lstlast(*a)->content);
	//printf("%d\n",ft_lstlast(a)->content);
	(*a)->next = temp;
}

void	rrb(t_s **b)
{
	t_s	*temp;

	temp = *b;
	//printf("%d\n", temp->content);
	*b = ft_lstnew(ft_lstlast(*b)->content);
	//printf("%d\n",ft_lstlast(a)->content);
	(*b)->next = temp;
}

void	ra(t_s **a)
{
	t_s *temp;
	t_s *zort;

	temp = ft_lstnew((*a)->content);
	(*a) = (*a)->next;
	zort = ft_lstlast((*a)->next);
	zort->next = temp;
}

void	rb(t_s **b)
{
	t_s *temp;
	t_s *zort;

	temp = ft_lstnew((*b)->content);
	(*b) = (*b)->next;
	zort = ft_lstlast((*b)->next);
	zort->next = temp;
}
