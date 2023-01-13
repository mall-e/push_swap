/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_req.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:21:33 by muyazici          #+#    #+#             */
/*   Updated: 2023/01/12 17:07:08 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_s **a)
{
	t_s	*new_first;
	t_s	*new_second;

	if (a != NULL && (*a)->next != NULL)
	{
		new_first = (*a)->next;
		new_second = *a;
		new_second->next = (*a)->next->next;
		new_first->next = new_second;
		*a = new_first;
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
	sa(&a);
	sb(b);
}

void	pb(t_s **a, t_s **b)
{
	t_s	*temp;
	t_s *temp1;

	temp = ft_lstnew((*a)->content, (*a)->rank);
	temp->next = *b;
	(*b) = temp;
	temp1 = *a;
	*a = (*a)->next;
	free(temp1);
	//t_s	*temp;
	//t_s	*temp1;

	//temp = (t_s *)malloc(sizeof(t_s));
	//if (!temp)
	//	return ;
	//temp->content = (*a)->content;
	//temp->rank = (*a)->rank;
	//temp->next = NULL;
	//if (!b)
	//{
	//	(*b) = temp;
	//	return ;
	//}
	//temp->next = (*b);
	//(*b) = temp;
	//temp1 = (*a);
	//(*a) = (*a)->next;
	//free(temp1);
	write(1, "pb\n", 3);
}

void	pa(t_s **a, t_s **b)
{
	t_s	*temp;
	t_s *temp1;

	temp = ft_lstnew((*b)->content, (*b)->rank);
	temp->next = *a;
	(*a) = temp;
	temp1 = *b;
	*b = (*b)->next;
	free(temp1);
	//temp = (t_s *)malloc(sizeof(t_s));
	//if (!temp)
	//	return ;
	//temp->content = (*b)->content;
	//temp->rank = (*b)->rank;
	//temp->next = NULL;
	//if (!a)
	//{
	//	(*a) = temp;
	//	return ;
	//}
	//temp1 = temp;
	//free(temp);
	//temp1->next = (*a);
	//(*a) = temp1;
	//temp1 = (*b);
	//(*b) = (*b)->next;
	//free(temp1);

	write(1, "pa\n", 3);
}
