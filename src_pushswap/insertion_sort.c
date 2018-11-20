/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:31:54 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/07 15:46:44 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	insertion_sort_3(t_liste **begin_liste, t_liste **begin_liste_bis)
{
	ft_putstr("pa\n");
	pa(begin_liste, begin_liste_bis);
	if ((*begin_liste)->next && (*begin_liste)->nbr > (*begin_liste)->next->nbr)
	{
		ft_putstr("sa\n");
		sa(begin_liste);
	}
}

static void	insertion_sort_2(t_liste **begin_liste, t_liste **begin_liste_bis)
{
	int i;

	i = 0;
	while ((*begin_liste_bis)->nbr > (*begin_liste)->nbr)
	{
		i++;
		ft_putstr("ra\n");
		ra(begin_liste);
	}
	ft_putstr("pa\n");
	pa(begin_liste, begin_liste_bis);
	while (i != 0)
	{
		ft_putstr("rra\n");
		rra(begin_liste);
		i--;
	}
}

void		insertion_sort(t_liste **begin_liste, t_liste **begin_liste_bis)
{
	if (*begin_liste_bis && (*begin_liste_bis)->next &&
			(*begin_liste_bis)->next->next)
	{
		if ((*begin_liste_bis)->next->nbr > (*begin_liste_bis)->nbr &&
				(*begin_liste_bis)->next->nbr > last_list(begin_liste_bis))
		{
			ft_putstr("rb\n");
			rb(begin_liste_bis);
		}
		else if (last_list(begin_liste_bis) > (*begin_liste_bis)->nbr &&
				last_list(begin_liste_bis) > (*begin_liste_bis)->next->nbr)
		{
			ft_putstr("rrb\n");
			rrb(begin_liste_bis);
		}
	}
	if ((*begin_liste_bis)->nbr < (*begin_liste)->nbr)
		insertion_sort_3(begin_liste, begin_liste_bis);
	else
		insertion_sort_2(begin_liste, begin_liste_bis);
}
