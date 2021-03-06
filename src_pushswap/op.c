/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:32:40 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/07 15:46:50 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_liste **begin_liste)
{
	int swap;

	if (*begin_liste && (*begin_liste)->next)
	{
		swap = (*begin_liste)->nbr;
		(*begin_liste)->nbr = (*begin_liste)->next->nbr;
		(*begin_liste)->next->nbr = swap;
	}
}

void	sb(t_liste **begin_liste)
{
	int swap;

	if (*begin_liste && (*begin_liste)->next)
	{
		swap = (*begin_liste)->nbr;
		(*begin_liste)->nbr = (*begin_liste)->next->nbr;
		(*begin_liste)->next->nbr = swap;
	}
}

void	ss(t_liste **begin_liste, t_liste **begin_liste_bis)
{
	sa(begin_liste);
	sb(begin_liste_bis);
}

void	pa(t_liste **begin_liste, t_liste **begin_liste_bis)
{
	t_liste *temp;

	if (*begin_liste_bis)
	{
		temp = *begin_liste_bis;
		*begin_liste_bis = (*begin_liste_bis)->next;
		temp->next = *begin_liste;
		*begin_liste = temp;
	}
}

void	pb(t_liste **begin_liste, t_liste **begin_liste_bis)
{
	t_liste *temp;

	if (*begin_liste)
	{
		temp = *begin_liste;
		*begin_liste = (*begin_liste)->next;
		temp->next = *begin_liste_bis;
		*begin_liste_bis = temp;
	}
}
