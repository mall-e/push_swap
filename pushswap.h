/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:26 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/08 17:10:34 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}				t_s;


void	lst_add_back(t_s **a, t_s *new);
t_s		*ft_lstnew(int data);
t_s		*ft_lstlast(t_s *a);
int		ft_atoi(const char *str);
void	lst_add_front(t_s **a, t_s **b);
void	sa(t_s *a);
void	sb(t_s *b);
void	pb(t_s **a, t_s **b);
void	pa(t_s **a, t_s **b);
void	ss(t_s *a, t_s *b);
void	rra(t_s **a);
void	rrb(t_s **b);
void	ra(t_s **a);
void	rb(t_s **b);

#endif
