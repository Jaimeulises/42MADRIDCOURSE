/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafernan <jafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:03:13 by jafernan          #+#    #+#             */
/*   Updated: 2020/02/16 18:27:18 by jafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int c;
	int j;
	int r;
	char malla [6][6];
	char salto;

	salto = '\n';
	r = 0;
	c = 1;
	i = 0;
	j = 1;

	while(r<=3)
	{
				malla[i][j]= argv[c][r];
				r++;
				j++;
	}
	i = 5;
	j = 1;
	while(r > 3 && r <= 7)
	{
		malla[i][j] = argv[c][r];
		j++;
		r++;
	}
	i = 1;
	j = 0;
	while(r > 7 && r <= 11)
		{
			malla[i][j] = argv[c][r];
			r++;
			i++;
		} 
	i = 1;
	j = 5;
	while(r > 11 && r <= 15)
		{
			malla[i][j] = argv[c][r];
			r++;
			i++;
		}
		printf("%c",malla[1][1]);
	i=0;
	j=0;
	while( i<=5 )
		{
			j=0;
			
				while(j>=0 && j<=5)
					{

						if(malla[i][j] == '1' || malla[i][j] == '2' || malla[i][j] == '3' || malla[i][j] == '4')
						 write(1,&malla[i][j],1);
						else 
						write(1, " ", 1);
					j++;
					}
			write(1,&salto,1);	
			i++;
		}
		return (0);
}
			

			
			
			
			