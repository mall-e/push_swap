/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_func2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:15:39 by muyazici          #+#    #+#             */
/*   Updated: 2023/01/13 14:19:14 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_lstlen(t_s *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return 0;
	if (lst)
	{
		while (lst != NULL)
		{
			lst = lst -> next;
			i++;
		}
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
	while (i < blen)
	{
		pa(a, b);
		i++;
	}
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	is_same(t_s *a)
{
	t_s	*cmp;

	while ((a))
	{
		cmp = (a)->next;
		while (cmp)
		{
			if (cmp->content == (a)->content)
				return (1);
			cmp = cmp->next;
		}
		(a) = (a)->next;
	}
	return (0);
}
