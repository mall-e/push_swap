/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:15 by muyazici          #+#    #+#             */
/*   Updated: 2022/11/01 15:31:24 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <string.h>

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
	t_s *tmp;
	t_s *min;

	tmp = (*a);
	min = ft_lstnew(tmp->content, tmp->rank);
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content && min->content > tmp->next->content)
			min = ft_lstnew(tmp->next->content, tmp->next->rank);
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
	pallb(a,b);
}

int	main(int ac, char **av)
{
	t_s *a;
	t_s *b;
	int	last;

	a = malloc(sizeof(t_s));
	b = malloc(sizeof(t_s));
	a = NULL;
	b = NULL;
	int	c;
	c = 0;
	last = 1;
	if (ac <= 2)
		return (0);
	while (av[last])
	{
		if(!ft_atoi(av[last]) && ft_strcmp(av[last], "0"))
			return (write (1, "Error\n", 6));
		last++;
	}
	last = 1;
	while (av[last])
	{
		lst_add_back(&a, ft_lstnew(ft_atoi(av[last]), 0));
		last++;
	}
	if (ac <= 4)
		sortf3(&a,&b);
	if (ac > 4 && ac < 10)
	{
		// while (c < ft_lstlen(a))
		// {
		// 	firstmin(&a, minnumber(&a), &b);
		// 	c++;
		// }
		// pallb(&a, &b);
		sort(&a, &b);
	}
	ranking(&a);
	if (ac > 10)
		upperhundered(&a,&b,ac);

	// while (a !=NULL )
	// {
	// 	printf("%d\n",a->content);
	// 	a = a->next;
	// }
 }


	// printf("|\t\t~\t\t|");
	// printf("\n|\tA\t|\tB\t|\n");

// void	sorting(t_s **a, t_s **b)
// {
// 	t_s	*temp;
// 	int	i;
// 	//int	j;

// 	i = 0;
// 	temp = (*a);
// 	while (temp->next)
// 	{
// 		if(temp->content > temp->next->content)
// 		{
// 			sa(*a);
// 			pb(a, b);
// 			pb(a, b);
// 		}
// 		temp = temp->next;
// 	}
// }




	// printf("\npb: \n");
	// i = 0;
	// while (i < ac - 3)
	// {
	// 	if (!(b->content))
	// 		b->content = 0;
	// 	if (!(a->content))
	// 		a->content = 0;
	// 	if (a->next == NULL)
	// 		a->content = 0;
	// 	printf("|\t%d\t|\t%d\t|\n", a->content, b->content);
	// 	if (a->next != NULL)
	// 		a = a->next;

	// 	b = b->next;
	// 	i++;
	// }
