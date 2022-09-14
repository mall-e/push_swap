/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_req.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:21:33 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/14 09:56:27 by muyazici         ###   ########.fr       */
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
	write(1, "sa\n", 3);
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
	write(1, "sb\n", 3);
}

void	ss(t_s *a, t_s *b)
{
	printf("zırt\n");
	sa(a);
	printf("zort\n");
	sb(b);
	write(1, "ss\n", 3);
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
	write(1, "pb\n", 3);
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
	write(1, "pa\n", 3);
}

