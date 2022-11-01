/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:20:15 by muyazici          #+#    #+#             */
/*   Updated: 2022/11/01 13:45:12 by muyazici         ###   ########.fr       */
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

t_s	*ft_lstnew(int data, int rank)
{
	t_s *new;

	new = malloc(sizeof(t_s));
	new->content = data;
	new->rank = rank;
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

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	return (str1[i] - str2[i]);
}
