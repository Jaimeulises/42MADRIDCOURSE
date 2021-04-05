/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:38:33 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/17 19:38:49 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int l;

	i = 0;
	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == (char)c)
			return ((char*)&s[l]);
		l--;
	}
	return (NULL);
}
