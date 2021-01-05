/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:44:44 by jafernan          #+#    #+#             */
/*   Updated: 2020/02/11 22:48:50 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(char a, char b, char c, char d)
{
	char e;

	e = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &e, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	if_func(char a, char b, char c, char d)
{
	if (c > a || (a == c && d > b))
	{
		ft_print(a, b, c, d);
		if ((a != '9' || b != '8' || c != '9' || d != '9'))
			write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a++ <= '9')
	{
		while (b++ <= '9')
		{
			while (c++ <= '9')
			{
				while (d++ <= '9')
				{
					if_func(a, b, c, d);
				}
				d = '0';
			}
			c = '0';
		}
		b = '0';
	}
}

int main(){

ft_print_comb2();
return (0);

}