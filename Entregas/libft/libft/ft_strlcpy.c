/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:24:53 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/17 19:25:36 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	x;

	i = 0;
	x = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dstsize - 1 > 0 && src[i] != 0)
	{
		dst[i] = src[i];
		dstsize--;
		i++;
		x++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
