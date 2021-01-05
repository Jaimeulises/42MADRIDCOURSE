/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:16:09 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/17 19:16:24 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *d;

	d = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s, ft_strlen(s) + 1);
	return (d);
}
