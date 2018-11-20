/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 01:25:10 by adlabban          #+#    #+#             */
/*   Updated: 2017/11/16 22:37:49 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		ch_sign(int n)
{
	if (n > 0)
		return ('+');
	else if (n < 0)
		return ('-');
	return ('0');
}

char			*ft_itoa(int n)
{
	char			sign;
	char			*str;
	short			index;
	unsigned int	tmp;
	unsigned int	v;

	sign = ch_sign(n);
	v = sign == '-' ? -n : n;
	tmp = v;
	index = sign != '+' ? 1 : 0;
	while (tmp)
	{
		index++;
		tmp /= 10;
	}
	if (!(str = ft_strnew(index)))
		return (NULL);
	str[0] = sign;
	while (v)
	{
		index--;
		str[index] = v % 10 + '0';
		v /= 10;
	}
	return (str);
}
