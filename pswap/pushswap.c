/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:15 by muyazici          #+#    #+#             */
/*   Updated: 2023/01/13 14:21:14 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <string.h>

void	allsorting(t_s *a, t_s *b, int ac);
int		is_counttwo(char **tmp, int i);

void	firstmin(t_s **a, t_s *min, t_s **b)
{
	t_s	*tmp;
	int	i;
	int	c;

	i = 0;
	c = 0;
	tmp = (*a);
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	tmp = (*a);
	while (tmp->content != min->content)
	{
		c++;
		tmp = tmp->next;
	}
	if (c <= i - c)
	{
		while (c)
		{
			ra(a);
			c--;
		}
	}
	else
	{
		c = i - c + 1;
		if (c == 0)
			c = 1;
		while (c)
		{
			rra(a);
			c--;
		}
	}
	pb(a, b);
}

t_s	*minnumber(t_s **a)
{
	t_s	*tmp;
	t_s	*min;

	tmp = (*a);
	min = *a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content
			&& min->content > tmp->next->content)
			min = tmp->next;
		tmp = tmp->next;
	}
	return (min);
}

void	sort(t_s **a, t_s **b)
{
	int	alen;

	alen = ft_lstlen(*a);
	alen--;
	while (alen)
	{
		firstmin(a, minnumber(a), b);
		alen--;
	}
	pallb(a, b);
}

int	main(int ac, char **av)
{
	t_s		*a;
	t_s		*b;
	char	**tmp;
	int		i;

	a = malloc(sizeof(t_s));
	b = malloc(sizeof(t_s));
	a = NULL;
	b = NULL;
	tmp = NULL;
	if (ac < 2)
		return (write(2, "Error\n", 6));
	else if (ac == 2)
	{
		tmp = ft_split(av[1], ' ');
		i = -1;
		while (tmp[++i])
			lst_add_back(&a, ft_lstnew(ft_atoi(tmp[i]), 0));
		if (is_counttwo(tmp, 0))
			return (write (2, "Error\n", 6));
	}
	else if (ac > 2)
	{
		i = 0;
		while (av[++i])
			lst_add_back(&a, ft_lstnew(ft_atoi(av[i]), 0));
		if (is_counttwo(av, 1))
			return (write (2, "Error\n", 6));
	}
	if (ft_lstlen(a) == 1 || ft_lstlen(a) == 0 || is_sorted(a))
		return (0);
	if (is_same(a))
		return (write (2, "Error\n", 6));
	//printf("BURADASIN == %d\n", __LINE__);
	allsorting(a, b, ac);
	//printf("BURADASIN == %d\n", __LINE__)

	//free_func(a);
	t_s *temp_b;
	//while (b)
	//{
	//	temp_b = b;
	//	b = b->next;
	//	free(temp_b);
	//}
	//while (a)
	//{
	//	temp_b = a;
	//	a = a->next;
	//	free(temp_b);
	//	//printf("stemp : %d\n", (*stemp)->next->content);
	//}
	i = 0;
	while (tmp && tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
	system("leaks push_swap");
}
