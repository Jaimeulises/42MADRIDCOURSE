/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:40:44 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/17 19:41:22 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new;

	if ((!s))
		return (NULL);
	if (start > ft_strlen((char*)s))
	{
		new = malloc(sizeof(char));
		if (new == 0)
			return (NULL);
		new[0] = 0;
		return (new);
	}
	new = malloc((len + 1) * sizeof(char));
	if (new == 0)
		return (NULL);
	ft_strlcpy(new, &s[start], len + 1);
	return (new);
}
