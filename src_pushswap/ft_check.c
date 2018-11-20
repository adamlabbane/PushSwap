/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:30:08 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/07 15:46:26 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check(char *str, t_liste **begin_liste, t_liste **begin_liste_bis)
{
	if (!(ft_strcmp(str, "sa")))
		sa(begin_liste);
	else if (!(ft_strcmp(str, "sb")))
		sb(begin_liste_bis);
	else if (!(ft_strcmp(str, "ss")))
		ss(begin_liste, begin_liste_bis);
	else if (!(ft_strcmp(str, "pa")))
		pa(begin_liste, begin_liste_bis);
	else if (!(ft_strcmp(str, "pb")))
		pb(begin_liste, begin_liste_bis);
	else if (!(ft_strcmp(str, "ra")))
		ra(begin_liste);
	else if (!(ft_strcmp(str, "rb")))
		rb(begin_liste_bis);
	else if (!(ft_strcmp(str, "rr")))
		rr(begin_liste, begin_liste_bis);
	else if (!(ft_strcmp(str, "rra")))
		rra(begin_liste);
	else if (!(ft_strcmp(str, "rrb")))
		rrb(begin_liste_bis);
	else if (!(ft_strcmp(str, "rrr")))
		rrr(begin_liste, begin_liste_bis);
	else
		return (0);
	return (1);
}
