/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:20:19 by jafernan          #+#    #+#             */
/*   Updated: 2021/04/05 12:38:26 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

typedef struct flags{
	int	zero;
	int number;
	int negative;
	int dot;
	int asteris;	
}flags;

int cicloauxiliar(char a);
int ft_printf(const char *format,...);

#endif