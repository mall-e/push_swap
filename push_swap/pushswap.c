/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:15 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/06 17:11:43 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <string.h>

int	main(int ac, char **av)
{
	t_a *a;
	t_b *b;
	int	last;

	a = malloc(sizeof(t_a));
	b = malloc(sizeof(t_b));
	a = NULL;
	last = ac - 1;
	last = 1;
	while (av[last])
	{
		printf("args: %s\n", av[last]);
		lst_add_back(&a, ft_lstnew(av[last]));
		last++;
	}
	sa(a);
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);


	printf("\npb: \n");
	int i = 0;
	while (i < ac - 1)
	{
		if (!(b->content))
			b->content = "0";
		if (!strcmp(a->content, "5"))
			a->content = "0";
		printf("|\t%s\t|\t%s\t|\n", a->content, b->content);
		if (a->next != NULL)
			a = a->next;

		b = b->next;
		i++;
	}
	printf("|\t");
	printf("\n|\tA\t|\tB\t|\n");
}
