/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:26 by muyazici          #+#    #+#             */
/*   Updated: 2022/09/07 17:13:32 by muyazici         ###   ########.fr       */
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


void lst_add_back(t_s **a, t_s *new);
t_s	*ft_lstnew(int data);
t_s *ft_lstlast(t_s *a);
void	sa(t_s *a);
void	sb(t_s *b);
void	pb(t_s **a, t_s **b);
void	lst_add_front(t_s **a, t_s **b);
int	ft_atoi(const char *str);
void	pa(t_s **a, t_s **b);

#endif
