/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:15 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/07 17:13:57 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <string.h>

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
		printf("args: %s\n", av[last]);
		lst_add_back(&a, ft_lstnew(ft_atoi(av[last])));
		last++;
	}
	sa(a);
	pb(&a, &b);//1
	pb(&a, &b);//2
	pb(&a, &b);//3
	pb(&a, &b);//4
	pb(&a, &b);//5
	pa(&a, &b);//5



	printf("\npb: \n");
	int i = 0;
	while (i < ac - 1)
	{
		if (!(b->content))
			b->content = 0;
		printf("|\t%d\t|\t%d\t|\n", a->content, b->content);
		if (a->next != NULL)
			a = a->next;

		b = b->next;
		i++;
	}
	printf("|\t");
	printf("\n|\tA\t|\tB\t|\n");
}
