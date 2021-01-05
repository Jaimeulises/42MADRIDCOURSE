/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:30:22 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/29 18:45:24 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	unsigned const char	*string;
	size_t				i;

	i = 0;
	dest = (unsigned char*)dst;
	string = (unsigned const char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = string[i];
		i++;
	}
	return (dst);
}
