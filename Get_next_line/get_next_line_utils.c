/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 12:37:50 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/29 17:58:15 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strlcpy(char *dst,char *src, size_t n)
{
	unsigned int i;

	i = 0;
	/*if(dst == 0 || src == 0)
		return (NULL);*/
	while((size_t)i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}

int ft_strlen(const char *string)
{
	int i;

	i = 0;
	if (!string) // Por no poner esto daba fallo
		return (0);
	while(string[i] != 0 && string != 0)
		i++;
	return (i);
}

char	*ft_strjoin(char const *track2, char const *track)
{
	char *out;
	int i;
	int j;


	if (!track && !track2)
		return (NULL);
	i = 0;
	j = 0;
	if(!(out = malloc((ft_strlen((char*)track2) + 
	ft_strlen((char*)track) + 1) * sizeof(char))))
		return (NULL);
	while(track2 && track2[i])
	{
		out[i] = track2[i];
		i++;
	}
	while(track && track[j] )
	{
		out[i] = track[j];
		j++;
		i++;
	}
	free((char *)track2);
	out[i] = '\0';
	return(out);
}
