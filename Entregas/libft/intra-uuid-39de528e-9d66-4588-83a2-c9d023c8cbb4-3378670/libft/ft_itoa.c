/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:13:51 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/29 18:40:06 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			cal_signo(int n)
{
	int signo;

	signo = 0;
	if (n < 0 && n != 0)
		signo = -1;
	if (n > 0 && n != 0)
		signo = 1;
	return (signo);
}

int			ft_tama(int n)
{
	int x;
	int i;

	x = n;
	i = 0;
	if (x < 0)
		x = x * (-1);
	while (x > 0)
	{
		x = x / 10;
		i++;
	}
	if (n < 0 && n != 0)
		i = i + 1;
	if (n == 0)
		i = 1;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*out;
	int		var[2];
	int		signo;

	signo = cal_signo(n);
	var[0] = ft_tama(n);
	if (n != -2147483648 && !(out = (char *)malloc(sizeof(char)
	* (var[0] + 1))))
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	var[1] = n * signo;
	out[var[0]] = '\0';
	while (var[0] > 0)
	{
		out[var[0] - 1] = (var[1] % 10) + 48;
		var[1] = var[1] / 10;
		var[0]--;
		if (signo == -1 && (var[0] - 1) == 0)
		{
			out[var[0] - 1] = '-';
			var[0]--;
		}
	}
	return (out);
}
