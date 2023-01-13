/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_func3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:48:42 by muyazici          #+#    #+#             */
/*   Updated: 2023/01/12 16:36:11 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	allsorting(t_s *a, t_s *b, int ac)
{
	if (ac < 4 && ft_lstlen(a) < 4)
	{
		sortf3(&a);
	}
	else if ((ac <= 6) && (ft_lstlen(a) <= 5))
	{
		sortf5(&a, &b);
		//printf("buradasın %d\n", __LINE__);
	}
	else if (ac > 6 || ft_lstlen(a) > 5)
	{
		//printf("buradasın %d || %d || %d\n", __LINE__, ac, ft_lstlen(a));
		ranking(&a);
		//printf("Buraya girdiysen senin ben... %d\n", __LINE__);
		upperhundered(&a, &b);
	}
	//printf("buradasın %d\n", __LINE__);
}

int	is_counttwo(char **tmp, int i)
{
	while (tmp[i])
	{
		if (ft_isdigit(tmp[i]))
			return (1);
		if (!ft_atoi(tmp[i]) && ft_strcmp(tmp[i], "0"))
			return (1);
		else if (ft_atoi(tmp[i]) == -1 && ft_strcmp(tmp[i], "-1"))
			return (1);
		i++;
	}
	return (0);
}

int	ft_isdigit(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (s[i] == '-')
			i++;
		if(s[i] > '9' || s[i] < '0')
			return (1);
	}
	return (0);
}

void	free_func(t_s *a)
{
	if (a->next != NULL)
		free_func(a->next);
	else if (a->next == NULL)
		free(a);
}
