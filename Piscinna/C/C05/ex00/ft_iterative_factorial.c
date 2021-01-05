/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 20:56:43 by jafernan          #+#    #+#             */
/*   Updated: 2020/02/23 21:03:42 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int	nb);

int main()
{
	int i;
	int x;

	i = 5;
	x = ft_iterative_factorial(i);
	printf("El factorial de 5 es = %d",x);
}


int	ft_iterative_factorial(int	nb)
{
	if( nb > 2)
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_iterative_factorial(nb - 1));
}
