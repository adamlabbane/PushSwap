/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:36:04 by adlabban          #+#    #+#             */
/*   Updated: 2018/10/06 16:37:00 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strchrpos(const char *s, int c)
{
	int		i;
	char	c2;

	i = 0;
	c2 = (char)c;
	while (s[i] != '\0' && c2 != s[i])
		i++;
	if (s[i] != c2)
		return (-1);
	else
		return (i);
}
