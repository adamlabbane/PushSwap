/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:23:47 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/09 11:41:38 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <stdlib.h>
# include <unistd.h>
# include "../Libft/libft.h"
# define BUFF_SIZE 1

typedef struct		s_liste
{
	struct s_liste	*next;
	int				nbr;
}					t_liste;

t_liste				*ft_create_elem(int nbr);
void				ft_list_push_front(t_liste **begin_liste, int nbr);
void				ft_list_push_back(t_liste **begin_liste, int nbr);
void				sa(t_liste **begin_liste);
void				sb(t_liste **begin_liste);
void				ss(t_liste **begin_liste, t_liste **begin_liste_bis);
void				ra(t_liste **begin_liste);
void				rb(t_liste **begin_liste);
void				rr(t_liste **begin_liste, t_liste **begin_liste_bis);
void				pa(t_liste **begin_liste, t_liste **begin_liste_bis);
void				pb(t_liste **begin_liste, t_liste **begin_liste_bis);
void				rra(t_liste **begin_liste);
void				rrb(t_liste **begin_liste);
void				rrr(t_liste **begin_liste, t_liste **begin_liste_bis);
int					get_next_line(const int fd, char **line);
int					ft_check(char *str, t_liste **begin_liste,
		t_liste **begin_liste_bis);
int					ft_check_sort(t_liste **begin_liste,
		t_liste **begin_liste_bis);
int					is_num(char *str);
int					check_int(char *str);
void				free_all(t_liste **liste);

#endif
