/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:24:48 by jafernan          #+#    #+#             */
/*   Updated: 2021/04/05 12:43:20 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "src/ft_printf.h"
#include <stdio.h>

	//int cycleprintf(const char *string, flags *flags_t, va_list argptr)
	int cycleprintf(const char *string)
	{
		int i;
		int final_len;
		
		i = 0;
		final_len = 0;
		printf("%s\n",string);
		while(string[i] != 0)
		{
			//if (string[i] == '%'.....) Aquì gestiomamos flags
			final_len = final_len + cicloauxiliar(string[i]);
			i++;
		}
		return (final_len);
	}


 int ft_printf(const char *format,...)
 {
	 va_list argptr;
	 va_start(argptr, format);
	// flags flags_t;
	int len;

	len = 0;
	//len = cycleprintf(format, &flags_t, argptr);
	printf("%s\n",format);
	len = cycleprintf(format);
	va_end(argptr);
	return(len);
 }
 