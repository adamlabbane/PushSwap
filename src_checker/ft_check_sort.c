/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:24:35 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/09 11:41:49 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
