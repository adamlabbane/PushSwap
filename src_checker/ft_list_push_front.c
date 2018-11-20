/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:25:25 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/09 11:42:05 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_list_push_front(t_liste **begin_liste, int nbr)
{
	t_liste *new;

	if (*begin_liste)
	{
		new = ft_create_elem(nbr);
		new->next = *begin_liste;
		*begin_liste = new;
	}
	else
		*begin_liste = ft_create_elem(nbr);
}
