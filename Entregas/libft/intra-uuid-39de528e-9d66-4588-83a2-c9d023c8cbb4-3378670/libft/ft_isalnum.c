/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:10:42 by jafernan          #+#    #+#             */
/*   Updated: 2020/12/17 19:47:59 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int x;
	int i;

	x = ft_isalpha(c);
	i = ft_isdigit(c);
	return ((x > 0 || i > 0) ? 1 : 0);
}
