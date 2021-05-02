/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:19:05 by jafernan          #+#    #+#             */
/*   Updated: 2021/05/02 17:45:34 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "ft_printf.h"

int	print_string(char *string, flags flags_t)
{
	int impresion;
	
	impresion = 0;

	if(flags_t.dot == 1)
	{
		impresion = impresion + printdotstring(string, flags_t.number);
		return(impresion);
	}
	if(flags_t.negative == 1 && flags_t.number > strlen(string))
	{
		impresion = impresion + printdotstring(string, strlen(string));
		impresion = impresion + printasterischar(flags_t.number - strlen(string));
	}
	if(flags_t.negative == 0 && flags_t.number > strlen(string))
		impresion = impresion + printasterischar(flags_t.number - strlen(string));
		impresion = impresion + printdotstring(string, strlen(string));
	if(flags_t.number == 0)
		impresion = impresion + printdotstring(string, strlen(string));
	return(impresion);
	
}
