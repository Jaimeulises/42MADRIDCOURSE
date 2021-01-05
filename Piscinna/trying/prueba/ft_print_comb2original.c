/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2original.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:44:44 by jafernan          #+#    #+#             */
/*   Updated: 2020/02/12 12:03:12 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	filtronum(char a, char b, char c, char d);
void	contador(char a, char b, char c, char d);

int		main(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	contador(a, b, c, d);
	return (0);
}

void	filtronum(char a, char b, char c, char d)
{
	if (c > a || (a == c && d > b))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if ((a != '9' || b != '8' || c != '9' || d != '9'))
			write(1, ", ", 2);
	}
}

void	contador(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					filtronum(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = '0';
			d = '0';
		}
		a++;
		b = '0';
	}
}
