/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:30:31 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/07 15:46:30 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check_sort(t_liste **begin_liste, t_liste **begin_liste_bis)
{
	if (!(*begin_liste_bis))
	{
		while ((*begin_liste)->next)
		{
			if ((*begin_liste)->nbr < (*begin_liste)->next->nbr)
				*begin_liste = (*begin_liste)->next;
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
