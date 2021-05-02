/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:42:36 by jafernan          #+#    #+#             */
/*   Updated: 2021/05/02 17:41:47 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int cicloauxiliar(char a)
{
	ft_putchar_fd(a, 1);
	return(1);
}

int printdotstring(char *string, int len)
{
	int printed;

	printed = 0;
	while(*string != 0 && len > 0)
	{
		ft_putchar_fd(*string, 1);
		printed++;
		string++;
		len --;
	}
	return(printed);
	
}

int printasterischar(int x)
{
	int i;

	i = 0;
	while(i < x)
	{
		ft_putchar_fd(' ', 1);
		i++;
	}
	return(x);
}