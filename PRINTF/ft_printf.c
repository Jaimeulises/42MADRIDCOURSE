/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:43:15 by jafernan          #+#    #+#             */
/*   Updated: 2021/03/16 11:23:53 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

typedef struct flags{
	int	zero;
	int number;
	int negative;
	int dot;
	int asteris;	
}flags;

void beginflags(flags *carga)
{
	carga->zero = 0;
	carga->number = 0;
	carga->negative = 0;
	carga->dot = 0;
	carga->asteris = 0;
}
void loadflags(flags *carga,char *string)
{
	while(*string == '-' || *string == '0' || *string == '.' || *string == '*') // Mal, hay que pensar como gestionar los números.
	{
		if(*string == '-')
			carga->negative = 1 + carga->negative;
		if(*string == '0')
			carga->zero = 1 + carga->zero;
		if(*string == '.')
			carga->dot = 1 + carga->dot;
		if(*string == '*')
			carga->asteris = 1 + carga->asteris;
			
	}
}
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


int ft_printf(const char *format, ...)
{
	char *string;
	int fd;
	int i;
	flags carga;
	
	fd = 1;
	i = 0;
	string = format;
	va_list argptr;
	va_start(argptr, format);
	while(string[i])
	{
		if(string[i] == '%')
		{
			if(ft_strchr("-0.*", string[i + 1]) != NULL)
			{
				beginflags(&carga);
				loadflags(&carga, &string[i + 1]);
				
			}
		}
		ft_putchar_fd(format[i],fd);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int total1;
	int total2;
	char string[30] = "Hola";
	struct Complejo	c1 = {12.3, -10.1}; // Declaro y asigno valores
	
	c1.re = 8; // Así accedo a los datos de la estructura, en este caso especificamente a re
	printf("(%.3f, %.3f\n", c1.re, c1.im);
	total2 = 2;
	total1 = sumum(5, 3, 5, 7, 6, 4);
	printf("\ntotal = %0+5d\n", total2);
	printf("%*d\n", 5, 101011);
	printf("%*.*s  %d", 0, 3, string,total2);
	//ft_printf("haodhaodh\n %d %g");
	return (0);
}
