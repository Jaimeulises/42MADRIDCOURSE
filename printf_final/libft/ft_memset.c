/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:31:48 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/17 18:35:39 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	str = s;
	i = ft_strlen(str);
	if (i < (int)len)
		return (NULL);
	i = 0;
	while (str[i] != 0 && i < (int)len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
