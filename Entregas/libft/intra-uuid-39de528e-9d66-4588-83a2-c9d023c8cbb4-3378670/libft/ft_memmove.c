/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:31:09 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/17 18:31:20 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = len;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (s < d)
		while (len--)
			d[len] = s[len];
	else
		while (i--)
		{
			*d = *s;
			d++;
			s++;
		}
	return (dst);
}
