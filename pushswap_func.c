/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:20:15 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/07 15:09:42 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void lst_add_back(t_s **a, t_s *new)
{
	t_s	*temp;

	temp = *a;
	if (!*a)
	{
		*a = new;
		return ;
	}
	temp = ft_lstlast(*a);
	temp->next = new;
}

t_s	*ft_lstnew(int data)
{
	t_s *new;

	new = malloc(sizeof(t_s));
	new->content = data;
	new->next = NULL;
	return(new);
}

t_s *ft_lstlast(t_s *a)
{
	if (a)
	{
		while (a->next != NULL)
			a = a->next;
	}
	return (a);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	int				eksi;
	unsigned long	sonuc;

	i = 0;
	eksi = 1;
	sonuc = 0;
	while ((str[i] < 14 && str[i] >= 8) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		eksi *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		sonuc = sonuc * 10 + (str[i++] - '0');
		if (sonuc > 2147483647 && eksi == 1)
			return (-1);
		else if (sonuc > 2147483648 && eksi == -1)
			return (0);
	}
	return ((int)(sonuc * eksi));
}
