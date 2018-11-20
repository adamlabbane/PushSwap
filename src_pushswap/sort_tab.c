/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:33:34 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/07 15:47:01 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*create_tab(t_liste *begin_liste)
{
	int i;
	int *tab;

	tab = malloc(sizeof(int) * ft_listesize(begin_liste));
	i = 0;
	while (begin_liste)
	{
		tab[i] = begin_liste->nbr;
		begin_liste = begin_liste->next;
		i++;
	}
	return (tab);
}

void	ins(int *tab, int n, int elem)
{
	int i;

	i = n;
	while ((i != 0) && (elem < tab[i - 1]))
	{
		tab[i] = tab[i - 1];
		i--;
	}
	tab[i] = elem;
}

void	sort_ins(int *tab, int n)
{
	int i;

	i = 1;
	while (i < n)
	{
		ins(tab, i, tab[i]);
		i++;
	}
}

void	print_tab(t_liste *begin_liste, int *tab)
{
	int i;

	i = 0;
	while (i < ft_listesize(begin_liste))
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
}
