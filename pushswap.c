/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:15 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/15 17:07:48 by muyazici         ###   ########.fr       */
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
	min = ft_lstnew(tmp->content);
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content && min->content > tmp->next->content)
			min = ft_lstnew(tmp->next->content);
		tmp = tmp->next;
	}
	return (min);
}

void	sort(t_s **a, t_s **b)
{
	int	alen;
	int	blen;

	alen = ft_lstlen(*a);
	alen--;
	while (alen)
	{
		firstmin(a, minnumber(a), b);
		alen--;
	}
	blen = ft_lstlen(*b);
	blen--;
	while (blen)
	{
		pa(a,b);
		blen--;
	}
}

void	sortf3(t_s **a, t_s **b)
{
	t_s	*tmp;

	tmp = *a;
	if (minnumber(a)->content == tmp->next->content)
	{
		sa(*a);
		if ((*a)->next->content < (*a)->next->next->content)
			return;
	}
	else if (minnumber(a)->content == (*a)->content)
	{
		if ((*a)->next->content > (*a)->next->next->content)
		{
			pb(a, b);
			sa(*a);
			pa(a, b);
		}
	}
	else if (minnumber(a)->content == (*a)->next->next->content)
	{
		rra(a);
		if ((*a)->next->content < (*a)->next->next->content)
			return ;
		else
		{
			pb(a, b);
			sa(*a);
			pa(a, b);
		}
	}

}

int	main(int ac, char **av)
{
	t_s *a;
	t_s *b;
	int	last;

	a = malloc(sizeof(t_s));
	b = malloc(sizeof(t_s));
	a = NULL;
	last = ac - 1;
	last = 1;
	while (av[last])
	{
		//printf("args: %s\n", av[last]);
		lst_add_back(&a, ft_lstnew(ft_atoi(av[last])));
		last++;
	}
	int i = 0;
	//printf("min number: %d\n", minnumber(&a)->content);
	//printf("list lenght: %d\n", ft_lstlen(a));
	sortf3(&a,&b);
	//sort(&a, &b);
	//printf("a:\n");
	while (i< ac - 1)
	{
		//printf("%d\n",a->content);
		a = a->next;
		i++;
	}
	//printf("b:\n");
	i= 0;
	// while (i< ac - 1)
	// {
	// 	printf("%d\n",b->content);
	// 	b = b->next;
	// 	i++;
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
