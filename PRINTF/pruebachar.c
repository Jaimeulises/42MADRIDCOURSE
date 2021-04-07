
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


int main()
{
	int x;
	float y;
	y = 10.45679;
	char string[30] = "Hey Que pasa";
	char c = 'm';
	x = 10;
	
	//VALOR CHar 
	printf("\n");
	printf("////////////VALOR CHAR 0 \n");
	//printf("El carácter a con 05c es igual a %05c \n",c); // el 0 y despues un numero da ancho al valor y rellena con ceros a la izquierda
	printf("El número x con 0c es igual a %0c \n\n",c);
	//printf("El número x es igual a %-05d \n\n",x); NO
	//printf("El número x es igual a %05s \n\n",string); NO
	

	//VALOR NÚMERO CHAR
	printf("////////////VALOR CHAR NUMERO \n");
	printf("El carácter a con 5c es igual a %5c \n",c); //NUMERO DA POR SI ANCHURA A LA IZQUIERDA CONTANDO EL PROPIO CARACTER 1
	printf("El número x con 1c es igual a %1c \n\n",c);

	
	//VALOR -
	printf("////////////VALOR CHAR - \n");
	printf("El número x con -30c es igual a %-30c jjjjj \n",c);// 
	printf("El número x con -1c es igual a %-1c jjjjj\n\n",c);//da ancho a la derecha
	printf("El número x con -c es igual a %-c jjjjj\n\n",c);


	//VALOR *
	printf("//////////// CHAR VALOR * \n");
	printf("El número x con 50500*c /5 es igual a %*c JJ\n",5 ,c);// IGUAL QUE LOS ANTERIORES, DA ANCHO Y SI NO RELLENA CON ESPACIOS A LA IZQUIERDA
	printf("El número x con *c /1 es igual a %*c JJ\n",1 ,c);
	//printf("El número x con 0*c /5 es igual a %0*c JJ\n",5 ,c); // flag indefenido con char
	printf("El número x con -*c /5 es igual a %-*c JJ\n",5 ,c);
	printf("El número x con -*c /30 es igual a %-*c JJ\n",30 ,c);
	//printf("El número x con -0*d /5 es igual a %-0*d JJ\n\n",5 ,x); // Flag '0' is ignored when flag '-' is present
	//printf("El número x con 0*d /5 es igual a %*0d JJ\n",5 ,x);

	/* NO SE USA PRECISION EN CHAR
	//VALOR .
	printf("//////////// CHAR VALOR . \n");
	printf("El número c con .*c /50 es igual a %.*c J\n", 50, c);
	printf("El número c con -.*c /3 es igual a %-.*c J\n", 3, c);
	printf("El número c con .5c es igual a %.3c J\n", c);
	printf("El número c con .*c /0 es igual a %.*c J\n", 0, c);
	printf("El número c con .*c /2 es igual a %.*c J\n", 2, c);
	//printf("El número x es igual a %.05s J\n", 50, "Hey Que pasa");
	//printf("El número x es igual a %-.3s J\n", 50, "Hey Que pasa");
	//-0123943 o * . o  038494 o *, cpsiudpx
	*/
	return(0);
}