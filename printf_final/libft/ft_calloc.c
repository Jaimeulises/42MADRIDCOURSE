/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:06:38 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/17 18:10:30 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*string;
	size_t	c;

	c = count * size;
	string = (void *)malloc(c);
	if (!string)
		return (NULL);
	ft_bzero(string, c);
	return (string);
}
