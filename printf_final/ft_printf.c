/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:24:48 by jafernan          #+#    #+#             */
/*   Updated: 2021/05/02 16:29:46 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "src/ft_printf.h"
#include <stdio.h>

	flags	beginflags(void)
	{
		flags flags_t;
		
		flags_t.zero = 0;
		flags_t.number = 0;
		flags_t.negative = 0;
		flags_t.dot = 0;
		flags_t.asteris = 0;
		//flags_t.asterisvalue = 0;
		return(flags_t);
	} 
	
	int		print_arg(va_list argptr, char a, flags flags_t)
	{
		int n;

		n = 0;
		if (a == 'c')
		n = print_char(va_arg(argptr, int), flags_t);
	/*else if (a == 'd' || a == 'i')
		n = print_int(va_arg(argptr, int), flags_t);
		*/
	else if (a == 's')
		n = print_string(va_arg(argptr, char *), flags_t);
		/*
	else if (a == 'x')
		n = print_hex(va_arg(argptr, unsigned int), 0, flags_t);
	else if (a == 'X')
		n = print_hex(va_arg(argptr, unsigned int), 1, flags_t);
	else if (a == 'p')
		n = print_ptr(va_arg(argptr, void *), flags_t);
	else if (a == 'u')
		n = print_unsiged_int(va_arg(argptr, unsigned int), flags_t);
	else if (a == '%')
		n = print_char('%', flags_t);
	else
		return (0);
	*/
	return (n);
	}
	
	
	void loadflags(flags *flags_t,const char *a, va_list argptr)
	{
		int i;
		i = 0;
		
		while (ft_strchr("-0123456789.*",a[i]) != 0 )
		{
			if(a[i] == '-')
				flags_t->negative = 1;			
			if(a[i] == '0')
				flags_t->zero = 1;
			if(a[i] >= 49 && a[i] <= 57)
				flags_t->number = ft_atoi(&a[i]);
			while (a[i] >= 49 && a[i] <= 57)
					i++;
			if(a[i] == '.')
				flags_t->dot = 1;
			if(a[i] == '*')
				flags_t->number = va_arg(argptr, int);	
			i++;
		}
					
	}
	int cycleprintf(const char *string, flags *flags_t, va_list argptr)
	{
		int i;
		int final_len;
		
		i = 0;
		final_len = 0;
		while(string[i] != 0)
		{
			*flags_t = beginflags();
			if (string[i] == '%')
			{		
				loadflags(flags_t, &string[i + 1],argptr);
				i++;
				while(ft_strchr("-0123456789.*",string[i]) != NULL)
					i++;
				if (string[i] && ft_strchr("cspdiuxX%", string[i])!= NULL)
				{
					final_len = final_len + print_arg(argptr, string[i], *flags_t);
					i++;
				}
			}
			if(string[i] == 0)
			 	return(final_len);
			final_len = final_len + cicloauxiliar(string[i]);
			i++;
		}
		return(final_len);
	}


 int ft_printf(const char *format,...)
 {
	 va_list argptr;
	 va_start(argptr, format);
	flags flags_t;
	int len;

	len = 0;
	len = cycleprintf(format, &flags_t, argptr);
	//len = cycleprintf(format);
	va_end(argptr);
	return(len);
 }
 