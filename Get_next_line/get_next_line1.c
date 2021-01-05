/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:54:55 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/29 17:27:35 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int ft_strlen(const char *string)
{
	int i;

	i = 0;
	if (!string) // Por no poner esto daba fallo
		return (0);
	while(string[i] != 0)
		i++;
	return (i);
}

char *ft_strcpy(char *dst,char *src, size_t n)
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

int is_line(char *track2)
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

char *fill_line(char *track2, char **line)
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
	ft_strcpy(*line, &track2[0], i);
	if (track2[i] == 0)
	{
		free(track2);
		return (0);
	}
	x = ft_strlen(&track2[0]) - i;
	if(!(out = malloc(sizeof(char)*(x + 1))))
		return (0);	
	out = ft_strcpy(out, &track2[i + 1], ft_strlen(&track2[i + 1]));
	free(track2);
	return (out);
}

int		get_next_line(int fd, char **line)
{
	static char	*excess;
	int			bytes;
	char		*buffer;
	bytes = 1;
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while (!is_line(excess) && bytes != 0 &&
			(bytes = read(fd, buffer, BUFFER_SIZE)) != -1)
	{
		buffer[bytes] = '\0';
		excess = ft_strjoin(excess, buffer);
	}
	free(buffer);
	excess = fill_line(excess, line);
	if (bytes == -1)
		return (-1);
	return ((bytes == 0) ? 0 : 1);
}

int main()
{
	int fd;
	int m;
	char **line;
	
	line = malloc(1 *sizeof(char*));
	fd = open("mi_fichero", O_RDONLY);
	m = 0;
	while(get_next_line(fd,line) > 0)
	{
		printf("%s\n",*line);
		free(*line);
	}
		
	return (0);
}

