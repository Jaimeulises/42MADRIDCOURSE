/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:42:52 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/03 18:42:58 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int j;
	unsigned int l;

	j = 0;
	l = 0;
	while (dst[j] && j < (unsigned int)dstsize)
		j++;
	while (src[l])
		l++;
	if (dstsize == 0)
		return (ft_strlen((char *)src));
	i = 0;
	if (dstsize - j == 0)
		return (j + ft_strlen((char*)src));
	while (src[i] && i < ((unsigned int)dstsize - j - 1))
	{
		dst[i + j] = src[i];
		++i;
	}
	dst[i + j] = '\0';
	return (j + l);
}
