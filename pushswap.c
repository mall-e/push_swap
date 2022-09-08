/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:15 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/08 16:41:46 by muyazici         ###   ########.fr       */
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
	//sa(a);
	//pb(&a, &b);//1
	//pb(&a, &b);//2
	//ra(a->next);
	//pb(&a, &b);//3
	//pb(&a, &b);//4
	//pb(&a, &b);//5
	//pa(&a, &b);//5
	//pa(&a, &b);//4
	//ss(a, b);
	//ss(a, b);
	sa(a);
	ra(&a);



	int i = 0;
	while (i< ac - 1)
	{
		printf("%d\n",a->content);
		a = a->next;
		i++;
	}

	printf("\npb: \n");
	i = 0;
	while (i < ac - 3)
	{
		if (!(b->content))
			b->content = 0;
		if (!(a->content))
			a->content = 0;
		if (a->next == NULL)
			a->content = 0;
		printf("|\t%d\t|\t%d\t|\n", a->content, b->content);
		if (a->next != NULL)
			a = a->next;

		b = b->next;
		i++;
	}
	printf("|\t\t~\t\t|");
	printf("\n|\tA\t|\tB\t|\n");
}
