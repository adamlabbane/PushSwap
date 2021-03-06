/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:30:50 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/07 15:46:35 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_list_push_back(t_liste **begin_liste, int nbr)
{
	t_liste *new;

	new = *begin_liste;
	if (new)
	{
		while (new->next != NULL)
			new = new->next;
		new->next = ft_create_elem(nbr);
	}
	else
		*begin_liste = ft_create_elem(nbr);
}
