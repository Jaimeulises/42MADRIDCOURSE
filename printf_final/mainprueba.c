/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprueba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:34:09 by jafernan          #+#    #+#             */
/*   Updated: 2021/04/07 20:17:33 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include "src/ft_printf.h"

int	main()
{
	int i;

	i = ft_printf("Hey que pasaños %*cq",5,'a');
	printf("\n%d\n",i);
	i = printf("Hey que pasaños %*cq",5,'a');
	printf("\n%d",i);
	return (0);
}