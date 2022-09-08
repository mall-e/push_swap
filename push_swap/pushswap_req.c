/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_req.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:21:33 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/08 13:37:14 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_s *a)
{
	int	temp;

	if (a != NULL && a->next != NULL)
	{
		temp = a->content;
		a->content = a->next->content;
		a->next->content = temp;
	}
}

void	sb(t_s *b)
{
	int	temp;

	if (b != NULL && b->next != NULL)
	{
		temp = b->content;
		b->content = b->next->content;
		b->next->content = temp;
	}
}

void	ss(t_s *a, t_s *b)
{
	printf("zırt\n");
	sa(a);
	printf("zort\n");
	sb(b);
}

void	pb(t_s **a, t_s **b)
{
	t_s *temp;

	temp = *b;
	if (!*b)
	{
		(*b)= ft_lstnew((*a)->content);
		(*b)->next = NULL;
		return ;
	}
	if (!*a)
	{
		*a = NULL;
		(*a)->next = NULL;
		return ;
	}
	(*b)= ft_lstnew((*a)->content);
	if ((*a)->next != NULL)
		(*a) = (*a)->next;

	(*b)->next = temp;
}

void	pa(t_s **a, t_s **b)
{
	t_s *temp;

	temp = *a;
	if (!*a)
	{
		(*a)= ft_lstnew((*b)->content);
		(*a)->next = NULL;
		return ;
	}
	if (!*b)
	{
		*b = NULL;
		(*b)->next = NULL;
		return ;
	}
	(*a)= ft_lstnew((*b)->content);
	if ((*b)->next != NULL)
		(*b) = (*b)->next;

	(*a)->next = temp;
}

