/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:56:38 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/29 18:04:19 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int ft_strlen(const char *string);

int		get_next_line(int fd, char **line);

char	*ft_strjoin(char const *track2, char const *track);

char *ft_strlcpy(char *dst,char *src, size_t n);

#endif
