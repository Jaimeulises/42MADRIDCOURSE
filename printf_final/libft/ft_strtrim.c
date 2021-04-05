/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 19:39:19 by jafernan          #+#    #+#             */
/*   Updated: 2021/04/05 12:32:02 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	contador(char a, const char *set)
{
	int i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		inicio;
	int		final;
	int		x;
	char	*out;
	//char prueba[7000];

	//out = "hola";


	i = 0;
	while (s1[i] != 0 && contador(s1[i], set) != 0)
		i++;
	inicio = i;
	i = ft_strlen(s1) - 1;
	while (i >= 0 && contador(s1[i], set))
		i--;
	final = i;
	x = (final - inicio);
	if (x < 0)
		x = x * (-1);
	out = (char *)malloc(sizeof(char) * (x + 2));
	if (out == 0)
		return (NULL);
	ft_strlcpy(out, &s1[inicio], (x + 2));
	return (out);
}
