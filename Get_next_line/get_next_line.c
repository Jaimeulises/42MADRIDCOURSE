/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 12:38:58 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/29 18:19:10 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_line(char *track2)
{
	int i;

	i = 0;
	if (track2 == 0) // por esto daba sementation
		return (0);
	while(track2[i] != '\n' && track2[i] != 0)
		i++;
	if(track2[i] == '\n')
		return(1);
	else
			return (0);
}

char *ft_lineback(char **line, char *track2)
{
	char *out;
	int i;
	int x;

	i = 0;
	if(track2 == 0)
		return (NULL);
	while(track2[i] != '\n' && track2[i] != 0)
		i++;
	if(!(*line = malloc(sizeof(char)*(i + 1))))
		return (NULL);
	ft_strlcpy(*line, &track2[0], i);
	if (track2[i] == 0)
	{
		free(track2);
		return (0);
	}
	x = ft_strlen(&track2[0]) - i;
	if(!(out = malloc(sizeof(char)*(x + 1))))
		return (0);	
	out = ft_strlcpy(out, &track2[i + 1], ft_strlen(&track2[i + 1]));
	free(track2);
	return (out);
}

int	get_next_line(int fd, char **line)
{
	static char	*track2;
	char *track;
	int bytes;

	bytes = 1;
	if(fd < 0 || BUFFER_SIZE <= 0 || line == 0)
		return (-1);
	if(!(track = malloc(sizeof(char)*(BUFFER_SIZE + 1))))
		return (-1);
	while(ft_line(track2) == 0 && bytes != 0  && (bytes = read(fd,track,BUFFER_SIZE)) != -1) //¿ Puede entrar la primera vez cuándo aún no he asignado valor a track2?
	{
		track[bytes] = '\0';
		track2 = ft_strjoin(track2,track);
	}
	free(track);
	track2 = ft_lineback(line,track2);

	if(bytes == -1)
		return (-1);
	if(bytes == 0)
	{
		free(track2);
		return (0);
	}
	else
	return (1);
}
