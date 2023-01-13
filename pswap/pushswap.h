/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:36:26 by muyazici          #+#    #+#             */
/*   Updated: 2023/01/12 16:59:55 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	int				content;
	int				rank;
	struct s_list	*next;
}				t_s;

void	sortf3(t_s **a);
void    defining(t_s *a, t_s *b);
void free_func(t_s *a);
void	ranking(t_s **a);
void	sortf5(t_s **a, t_s **b);
void	upperhundered(t_s **a, t_s **b);
void	pallb(t_s **a, t_s **b);
int		is_counttwo(char **tmp, int i);
void	allsorting(t_s *a, t_s *b, int ac);
int		ft_strlen(char *s);
char	**ft_split(char const *s, char c);
t_s		*minnumber(t_s **a);
t_s		*maxnumber(t_s **a);
t_s		*ft_lstlast(t_s *a);
t_s		*ft_lstnew(int data, int rank);
int		is_same(t_s *a);
int		is_sorted(t_s *a);
int		ft_atoi(const char *str);
int		ft_lstlen(t_s *a);
int		ft_isdigit(char *s);
void	lst_add_back(t_s **a, t_s *new);
void	firstmin(t_s **a, t_s *min, t_s **b);
void	ft_lstend(t_s *a);
int		ft_strcmp(char *s1, char *s2);
void	sa(t_s **a);
void	sb(t_s *b);
void	pb(t_s **a, t_s **b);
void	pa(t_s **a, t_s **b);
void	ss(t_s *a, t_s *b);
void	rra(t_s **a);
void	rrb(t_s **b);
void	ra(t_s **a);
void	rb(t_s **b);

#endif
