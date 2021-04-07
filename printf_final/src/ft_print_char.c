/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 11:26:35 by jafernan          #+#    #+#             */
/*   Updated: 2021/04/07 20:11:21 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(va_list argptr, flags flags_t)
{
	int impresion;
	char a;
	
	impresion = 0;
	a = va_arg(argptr,int); 
	
	if(flags_t.negative == 1)
		impresion = impresion + cicloauxiliar(a);
	if(flags_t.number > 1)
		impresion = impresion + printasterischar(flags_t.number);
	if(flags_t.negative == 0)
		impresion = impresion + cicloauxiliar(a);
	return(impresion);
	
}
