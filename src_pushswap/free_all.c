/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:29:41 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/07 15:46:24 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			free_all(t_liste **liste)
{
	t_liste		*temp;
	t_liste		*temp2;

	temp = *liste;
	while (temp && temp->next)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}
