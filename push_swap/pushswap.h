/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:26 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/06 16:31:29 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct a_list
{
	char	*content;
	struct a_list	*next;
}				t_a;

typedef struct b_list
{
	char	*content;
	struct b_list	*next;
}				t_b;

void lst_add_back(t_a **a, t_a *new);
t_a	*ft_lstnew(char *data);
t_a *ft_lstlast(t_a *a);
void	sa(t_a *a);
void	sb(t_b *b);
void	pb(t_a **a, t_b **b);
void	lst_add_front(t_a **a, t_b **b);
t_b	*ft_lstnewb(char *data);

#endif
