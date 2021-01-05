/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:27:00 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/17 18:27:42 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	p;
	char			*dest;
	const char		*source;

	i = 0;
	p = c;
	dest = dst;
	source = src;
	if (*dest == 0 || *source == 0)
		return (NULL);
	while (n > 0)
	{
		dest[i] = source[i];
		if (dest[i] == p)
			return ((void*)(dest + i + 1));
		i++;
		n--;
	}
	return (NULL);
}
