/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triesprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 18:29:12 by jafernan          #+#    #+#             */
/*   Updated: 2021/03/16 12:49:10 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


int main()
{
	int x;
	float y;
	y = 10.45679;
	char string[30] = "Hey Que pasa";
	x = 10;
	
	//VALOR 0
	printf("\n");
	printf("////////////VALOR 0 \n");
	printf("El número x con 05d es igual a %05d \n",x); // el 0 y despues un numero da ancho al valor y rellena con ceros a la izquierda
	printf("El número x con 01d es igual a %01d \n\n",x);
	//printf("El número x es igual a %-05d \n\n",x); NO
	//printf("El número x es igual a %05s \n\n",string); NO
	
	//VALOR NÚMERO
	printf("////////////VALOR NUMERO \n");
	printf("El número x con 30d es igual a %30d \n",x); // un numero da el ancho y rellena con espacios lo que falte.
	printf("El número x con 1d es igual a %1d \n\n",x);
	
	//VALOR -
	printf("////////////VALOR - \n");
	printf("El número x con -30d es igual a %-30d jjjjj \n",x);// aquí tmb se da ancho através de un número, sin embargo el - indica que el resto se rellena con espacio a la derecha y no la izquierda.
	printf("El número x con -1d es igual a %-1d jjjjj\n\n",x);

	//VALOR *
	printf("////////////VALOR * \n");
	printf("El número x con *d /5 es igual a %*d JJ\n",5 ,x);// IGUAL QUE LOS ANTERIORES, DA ANCHO Y SI NO RELLENA CON ESPACIOS A LA IZQUIERDA
	printf("El número x con *d /1 es igual a %*d JJ\n",1 ,x);
	printf("El número x con 0*d /5 es igual a %0*d JJ\n",5 ,x);
	printf("El número x con -*d /5 es igual a %-*d JJ\n",5 ,x);
	printf("El número x con -*s /30 es igual a %-*s JJ\n",30 ,string);
	//printf("El número x con -0*d /5 es igual a %-0*d JJ\n\n",5 ,x); // Flag '0' is ignored when flag '-' is present
	//printf("El número x con 0*d /5 es igual a %*0d JJ\n",5 ,x);

	//VALOR .
	printf("////////////VALOR . \n");
	printf("El número x con .*s /50 es igual a %.*s J\n", 50, "Hey Que pasa");
	printf("El número x con -.*s /3 es igual a %-.*s J\n", 3, "Hey Que pasa");
	printf("El número x con .3s es igual a %.3s J\n", "Hey Que pasa");
	printf("El número x con .*d /0 es igual a %.*d J\n", 0, x);
	printf("El número x con .*f /2 es igual a %.*f J\n", 2, y);
	//printf("El número x es igual a %.05s J\n", 50, "Hey Que pasa");
	//printf("El número x es igual a %-.3s J\n", 50, "Hey Que pasa");
	
	return(0);
}