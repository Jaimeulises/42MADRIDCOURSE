/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:30:22 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/21 12:34:58 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*dest;
	const char	*source;

	i = 0;
	dest = dst;
	source = src;
	if (*dest == 0 || *source == 0)
		return (NULL);
	while (n > 0)
	{
		dest[i] = source[i];
		i++;
		n--;
	}
	return ((void*)(dest));
}
