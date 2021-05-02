/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 11:26:35 by jafernan          #+#    #+#             */
/*   Updated: 2021/05/02 17:41:37 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int b, flags flags_t)
{
	int impresion;
	char a;
	
	impresion = 0;
	a = b; 
	
	if(flags_t.negative == 1)
		impresion = impresion + cicloauxiliar(a);
	if(flags_t.number > 1)
		impresion = impresion + printasterischar(flags_t.number - 1);
	if(flags_t.negative == 0)
		impresion = impresion + cicloauxiliar(a);
	return(impresion);
	
}
