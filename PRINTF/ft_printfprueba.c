/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfprueba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:09:02 by jafernan          #+#    #+#             */
/*   Updated: 2021/01/05 17:49:52 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>


/*int	ft_printf(const char *format, ...)
{
	va_list argptr;

	va_start(argptr, format);



	va_end(argptr);
	return(0);
}
*/
// C PROGRAMMING IN LINUX TUTOTRIAL #078 - VA_START(),....

int	sumum(int num,...)
{
	int sum;
	int count;

	sum = num;
	count = 0;
	va_list argptr;
	va_start(argptr, num);
	//printf("total = %3$d\n",sum,);
	while (count < num)
	{
		//if (var_arg(argptr,int) != (NUMERO ENTERO))  para fallos impredecibles
		sum = sum + va_arg(argptr, int);
		//¿como definir que haga el ciclo hasta que se quede sin argumentos?
		//printf("total = %d\n", sum);
		count++;
	}
	va_end(argptr);
	return (sum);
}

int	main(int argc, char *argv[])
{
	int total1;
	int total2;

	total2 = 2;

	total1 = sumum(5, 3, 5, 7, 6, 4);

	printf("\ntotal = %0+5d\n", total2);
	printf("%*d\n", 5, 101011);
	printf("%*.*s  %d", 0, 3, "abcdef",total2);

	//ft_printf("haodhaodh\n %d %g");
	return (0);
}
