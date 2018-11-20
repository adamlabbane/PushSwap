/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:26:56 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/07 15:45:59 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_liste **begin_liste)
{
	t_liste *temp;
	t_liste *temp2;

	temp = *begin_liste;
	if (temp)
	{
		temp2 = (*begin_liste)->next;
		while ((*begin_liste)->next)
			*begin_liste = (*begin_liste)->next;
		(*begin_liste)->next = temp;
		temp->next = NULL;
		(*begin_liste) = temp2;
	}
}

void	rb(t_liste **begin_liste)
{
	t_liste *temp;
	t_liste *temp2;

	temp = *begin_liste;
	if (temp)
	{
		temp2 = (*begin_liste)->next;
		while ((*begin_liste)->next)
			*begin_liste = (*begin_liste)->next;
		(*begin_liste)->next = temp;
		temp->next = NULL;
		(*begin_liste) = temp2;
	}
}

void	rra(t_liste **begin_liste)
{
	t_liste *temp;
	t_liste *temp2;

	temp = *begin_liste;
	if (temp && temp->next)
	{
		while ((*begin_liste)->next->next)
			*begin_liste = (*begin_liste)->next;
		temp2 = (*begin_liste)->next;
		(*begin_liste)->next = NULL;
		temp2->next = temp;
		*begin_liste = temp2;
	}
}

void	rrb(t_liste **begin_liste)
{
	t_liste *temp;
	t_liste *temp2;

	temp = *begin_liste;
	if (temp && temp->next)
	{
		while ((*begin_liste)->next->next)
			*begin_liste = (*begin_liste)->next;
		temp2 = (*begin_liste)->next;
		(*begin_liste)->next = NULL;
		temp2->next = temp;
		*begin_liste = temp2;
	}
}
