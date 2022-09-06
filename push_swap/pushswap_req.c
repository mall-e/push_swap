/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_req.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:21:33 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/06 16:52:15 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_a *a)
{
	char *temp;

	temp = a->content;
	a->content = a->next->content;
	a->next->content = temp;
}

void	sb(t_b *b)
{
	char *temp;

	temp = b->content;
	b->content = b->next->content;
	b->next->content = temp;
}

void	pb(t_a **a, t_b **b)
{
	t_b *temp;

	temp = *b;
	if (!*b)
	{
		(*b)= ft_lstnewb((*a)->content);
		(*b)->next = NULL;
		return ;
	}
	(*b)= ft_lstnewb((*a)->content);
	(*a) = (*a)->next;
	(*b)->next = temp;
	//temp->next = NULL;
}

