/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:56:56 by jafernan          #+#    #+#             */
/*   Updated: 2020/02/09 19:49:07 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int w;
	int h;

	h = 0;
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if ((w == 0 && h == 0) || (w == 0 && h == y - 1) ||
			(w == x - 1 && h == 0) || (w == x - 1 && h == y - 1))
				ft_putchar('o');
			else if (w == 0 || w == x - 1)
				ft_putchar('|');
			else if (h == 0 || h == y - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}