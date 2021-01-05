/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:22:41 by jafernan          #+#    #+#             */
/*   Updated: 2021/01/05 19:19:27 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int ft_printf(const char *format,...)
{
	char *string;

	string = format;
	va_list argptr;
	va__start(argptr ,format);
	while (*string)
	{
		if (*string == '%')
		{
			string++;
			if(*string == '.' || *string == 0 || *string == '*' || (*string >= 48 && *string <= 57))
			{
				
			}
		}
		ft_putbnr(&string);
		string++;
	}
}