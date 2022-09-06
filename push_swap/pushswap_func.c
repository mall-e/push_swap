/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:20:15 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/06 16:28:54 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void lst_add_back(t_a **a, t_a *new)
{
	t_a	*temp;

	temp = *a;
	if (!*a)
	{
		*a = new;
		return ;
	}
	temp = ft_lstlast(*a);
	temp->next = new;
}

t_a	*ft_lstnew(char *data)
{
	t_a *new;

	new = malloc(sizeof(t_a));
	new->content = data;
	new->next = NULL;
	return(new);
}

t_b	*ft_lstnewb(char *data)
{
	t_b *new;

	new = malloc(sizeof(t_b));
	new->content = data;
	new->next = NULL;
	return(new);
}

t_a *ft_lstlast(t_a *a)
{
	if (a)
	{
		while (a->next != NULL)
			a = a->next;
	}
	return (a);
}
