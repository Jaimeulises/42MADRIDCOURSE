/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:42:36 by jafernan          #+#    #+#             */
/*   Updated: 2021/04/07 20:16:13 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int cicloauxiliar(char a)
{
	ft_putchar_fd(a, 1);
	return(1);
}

int printasterischar(int x)
{
	int i;

	i = 0;
	while(i < x - 1)
	{
		ft_putchar_fd(' ', 1);
		i++;
	}
	return(x - 1);
}