/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:30:40 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/07 15:46:33 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_liste	*ft_create_elem(int nbr)
{
	t_liste *new;

	new = malloc(sizeof(t_liste));
	if (new)
	{
		new->nbr = nbr;
		new->next = NULL;
	}
	return (new);
}
