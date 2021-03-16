/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triesstructure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:00:46 by jafernan          #+#    #+#             */
/*   Updated: 2021/03/16 11:12:43 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct flags{
	int	zero;
	int number;
	int negative;
	int dot;
	int asteris;	
}flags;

flags beginflags(void)
{
	flags carga;
	carga.zero = 0;
	carga.number = 0;
	carga.negative = 0;
	carga.dot = 0;
	carga.asteris = 0;
	return(carga);
}

void beginflags2(flags *carga)
{
	carga->zero = 8000;
	carga->number = 0;
	carga->negative = 0;
	carga->dot = 0;
	carga->asteris = 0;
}

void prueba(flags carga)
{
	carga.zero = 1500;
	printf("%d\n",carga.zero);
}

void prueba2(flags *carga) // cuando es un puntero de una estructura se usa una flecha en vez de un punto para asignar valores
{
	carga->zero = carga->zero + 1;
	//(*carga).zero = 1; En vez de flecha se puede estructuras tambien así es lo mismo
}

int main()
{
	flags carga;
	
	carga = beginflags();
	printf("%d\n",carga.zero);
	prueba(carga);
	printf("%d\n",carga.zero);
	
	beginflags2(&carga);
	printf("%d\n",carga.zero);
	prueba2(&carga);
	printf("%d\n",carga.zero);
	return(0);
}