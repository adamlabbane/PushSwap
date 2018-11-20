/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:24:47 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/09 11:42:00 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
