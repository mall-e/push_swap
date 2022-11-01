/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_func2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:15:39 by muyazici          #+#    #+#             */
/*   Updated: 2022/10/12 17:10:28 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_lstlen(t_s *a)
{

	int	i;

	i = 0;
	while (a != NULL)
	{
		a = a -> next;
		i++;
	}
	return (i);
}

void	ft_lstend(t_s *a)
{
	if (a)
	{
		while (a->next->next != NULL)
			a = a->next;
	}
	a->next = NULL;
}

void	pallb(t_s **a, t_s **b)
{
	int	blen;
	int	i;

	i = 0;
	blen = ft_lstlen(*b);
	//printf("blen : %d\n", blen);
	while (i < blen)
	{
		pa(a,b);
		i++;
	}
}
