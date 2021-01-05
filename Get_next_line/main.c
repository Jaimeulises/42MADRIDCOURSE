/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 18:22:45 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/30 10:27:38 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	printf("%s\n",*line);
		free(*line);
	return (0);
}
