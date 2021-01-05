/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:15:42 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/17 19:15:50 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int l;

	i = 0;
	l = ft_strlen(s);
	while (i <= l)
	{
		if (s[i] == (char)c)
			return ((char*)&s[i]);
		i++;
	}
	return (NULL);
}
