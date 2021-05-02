/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:20:19 by jafernan          #+#    #+#             */
/*   Updated: 2021/05/02 16:28:57 by jafernan         ###   ########.fr       */
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
	int asterisvalue;	
}flags;

int cicloauxiliar(char a);

int ft_printf(const char *format,...);

int printasterischar(int x);

int	print_char(int b, flags flags_t);

int		print_arg(va_list argptr, char a, flags flags_t);

#endif