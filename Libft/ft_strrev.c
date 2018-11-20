/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:59:55 by adlabban          #+#    #+#             */
/*   Updated: 2018/11/04 16:59:59 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	swap;
	int		b;
	int		c;

	b = 0;
	c = ft_strlen(str) - 1;
	while (b < c)
	{
		swap = str[b];
		str[b] = str[c];
		str[c] = swap;
		b++;
		c--;
	}
	return (str);
}
