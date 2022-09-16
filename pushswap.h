/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:26 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/16 13:41:07 by muyazici         ###   ########.fr       */
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


void	sortf3(t_s **a, t_s **b);
int	flash(t_s **a, int num);
t_s		*minnumber(t_s **a);
t_s		*maxnumber(t_s **a);
t_s		*ft_lstlast(t_s *a);
t_s		*ft_lstnew(int data);
int		ft_atoi(const char *str);
int		ft_lstlen(t_s *a);
void	lst_add_back(t_s **a, t_s *new);
void	lst_add_front(t_s **a, t_s **b);
void	firstmin(t_s **a, t_s *min, t_s **b);
void	ft_lstend(t_s *a);
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
