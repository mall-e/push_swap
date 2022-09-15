/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_func2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:15:39 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/15 14:35:41 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_lstlen(t_s *a)
{
	int	i;

	i = 0;
	while (a->next)
	{
		a = a->next;
		i++;
	}
	return (++i);
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
