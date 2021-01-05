/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 23:04:11 by jafernan          #+#    #+#             */
/*   Updated: 2020/02/16 14:04:22 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int n;
	int j;
	int numeros[i];
	int sum;
	int malla [6][6];

	i = 1;
	n = 0;
	sum = 0;
	j =  0;
	while(arg[i][j]!= '\0')
		{
			printf("       %c\n", argv[i][j]);

			sum = atoi(argv[i][j]);
			numeros[n] = sum;
			n++;
			j++;
		}


		printf("%d", numeros[2]);
    return 0;
}