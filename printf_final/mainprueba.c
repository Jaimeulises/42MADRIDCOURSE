/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprueba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:34:09 by jafernan          #+#    #+#             */
/*   Updated: 2021/04/05 12:55:16 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include "src/ft_printf.h"

int	main()
{
	char string[30]= "Hey que pasaños \0";
	//char string2[30] = "Si esto funciona";
	int i;

	i = ft_printf(string,2,2,2);
	printf("\n%d",i);
	return (0);
}