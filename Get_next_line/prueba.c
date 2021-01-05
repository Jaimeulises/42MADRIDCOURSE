/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:22:13 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/29 13:06:59 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/*int main	( int argc,char* argv[] )
{
	char *cadena;
	int leido;
	int i = 0;

	//Apertura Fichero
	cadena = malloc(sizeof(char)*11);
	int fichero = open("mi_fichero", O_RDONLY);
	
	//Comprobación

	if (fichero == -1)
	{
		perror("Error al abrir fichero:");
		exit(1);
	}
	//Coloca el puntero en la posisción 400

	//lseek(fichero,400,SEEK_SET);

	//LEE DIEZ BYTES

	leido = read(fichero, cadena, 10);
	while(cadena[i] != 0)
	{
		write(1,&cadena[i],1);
		i++;
	}
	i = 0;
	free(cadena);
	cadena = malloc(sizeof(char)*11);
	leido = read(fichero, cadena, 10);
	while(cadena[i] != 0)
	{
		write(1,&cadena[i],1);
		i++;
	}
	close(fichero);
	cadena[10] = 0;

	//Mensaje ver que se leyo

	printf("    Se leyeron %d bytes. La cadena leída es %s\n", leido, cadena);
	return (0);
	


}
*/

/*char	*fill_line(char *excess, char **line)
{
	int		i;
	char	*res;

	i = 0;
	if (!excess)
		return (0);
	while (excess[i] && excess[i] != '\n')
		i++;
	if (!(*line = malloc(sizeof(char) * (i + 1))))
		return (0);
	ft_strcpy(*line, excess, i);
	if (excess[i] == 0)
	{
		free(excess);
		return (0);
	}
	if (!(res = malloc(sizeof(char) * ((ft_strlen(excess) - i) + 1))))
		return (0);
	ft_strcpy(res, &excess[i + 1], ft_strlen(&excess[i + 1]));
	free(excess);
	return (res);
}

int		is_line(char *buffer)
{
	int i;

	i = 0;
	if (!buffer)
		return (0);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	return (buffer[i] == '\n') ? 1 : 0;
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	if (!(ptr = (char *)malloc((ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1) * sizeof(char))))
		return (NULL);
	while (s1 && s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	free((char *)s1);
	ptr[i] = '\0';
	return (ptr);
}