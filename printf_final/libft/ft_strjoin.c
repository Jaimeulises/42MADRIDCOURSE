/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:16:37 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/19 18:12:31 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		x;
	int		y;
	int		i;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	y = ft_strlen(s2);
	x = ft_strlen(s1);
	i = 0;
	if (!(out = (char *)malloc((sizeof(char)) * (x + y + 1))))
		return (NULL);
	while (s1[i] != 0)
	{
		out[i] = s1[i];
		i++;
	}
	while (*s2 != 0)
	{
		out[i] = *s2;
		i++;
		s2++;
	}
	out[i] = '\0';
	return (out);
}
