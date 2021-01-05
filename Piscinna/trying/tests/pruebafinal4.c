
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void condiciones(char malla[6][6])
{
	int x;
	int y;
	x = 0;
	y = 0;
	//condicion 1 en fila 0 y 5
	while ((x <= 5 && y == 0) || (x <= 5 && y == 5))
	{
		if (malla[x][0] == '1')
			malla[x][1] = '4';
		else if (malla[x][5] == '1')
			malla[x][4] = '4';
		x++;
	}
	x = 0;
	y = 0;
	//condición 1 en columna 0 y 5
	while ((x == 0 && y <= 5) || (x == 5 && y <= 5))
	{
		if (malla[0][y] == '1')
			malla[1][y] = '4';
		else if (malla[5][y] == '1')
			malla[4][y] = '4';
		y++;
	}
	x = 0;
	y = 0;
	//condición 4 en columnas
	while ((x <= 5 && y == 0) || (x <= 5 && y == 5))
	{
		if (malla[x][0] == '4')
		{
			malla[x][1] = '1';
			malla[x][2] = '2';
			malla[x][3] = '3';
			malla[x][4] = '4';
		}
		else if (malla[x][5] == '4')
		{
			malla[x][4] = '1';
			malla[x][3] = '2';
			malla[x][2] = '3';
			malla[x][1] = '4';
		}
		x++;
	}
	x = 0;
	y = 0;
	//condición 4 en filas
	while ((x == 0 && y <= 5) || (x == 5 && y <= 5))
	{
		if (malla[0][y] == '4')
		{
			malla[1][y] = '1';
			malla[2][y] = '2';
			malla[3][y] = '3';
			malla[4][y] = '4';
		}
		else if (malla[5][y] == '4')
		{
			malla[4][y] = '1';
			malla[3][y] = '2';
			malla[2][y] = '3';
			malla[1][y] = '4';
		}
		y++;
	}
	x = 0;
	y = 0;
	//condición columnas 2/3
	while ((x <= 5 && y == 0) || (x <= 5 && y == 5))
	{
		if (malla[x][0] == '2' && malla[x][5] == '3')
		{
			malla[x][2] = '4';
		}
		x++;
	}
	x = 0;
	y = 0;
	while ((x <= 5 && y == 0) || (x <= 5 && y == 5))
	{
		if (malla[x][0] == '3' && malla[x][5] == '2')
		{
			malla[x][3] = '4';
		}
		x++;
	}
	x = 0;
	y = 0;
	//condición filas 3/2
	while ((x == 0 && y <= 0) || (x == 5 && y <= 0))
	{
		if (malla[0][y] == '2' && malla[5][y] == '3')
		{
			malla[2][y] = '4';
		}
		y++;
	}
	x = 0;
	y = 0;
	while ((x == 0 && y <= 5) || (x == 5 && y <= 5))
	{
		if (malla[0][y] == '3' && malla[5][y] == '2')
		{
			malla[3][y] = '4';
		}
		y++;
	}
	x = 0;
	y = 0;


//condición 1-2 para poner 3
while ((x == 0 && y <= 5)   || (x == 5 && y <= 5))
	{
		if (malla[5][y] == '2' && malla[0][y] == '1')
			malla[4][y] = '3';
		else if (malla[0][y] == '2' && malla[5][y]== '1')
			malla[1][y] = '3';
		y++;
	}
	x = 0;
	y = 0;

	while ((y == 0 && x <= 5)   || (y == 5 && x <= 5))
	{
		if (malla[x][5] == '2' && malla[x][0] == '1')
			malla[x][4] = '3';
		else if (malla[x][0] == '2' && malla[x][5]== '1')
			malla[x][1] = '3';
		x++;
	}
}
int main(int argc, char *argv[])
{
	int i;
	int c;
	int j;
	int r;
	char malla[6][6];
	char salto;

	salto = '\n';
	r = 0;
	c = 1;
	i = 0;
	j = 1;

	while (r < 7)
	{
		malla[i][j] = argv[c][r];
		r = r + 2;
		j++;
	}
	i = 5;
	j = 1;
	while (r > 7 && r < 15)
	{
		malla[i][j] = argv[c][r];
		j++;
		r = r +2;
	}
	i = 1;
	j = 0;
	while (r > 15 && r < 23)
	{
		malla[i][j] = argv[c][r];
		r = r + 2;
		i++;
	}
	i = 1;
	j = 5;
	while (r > 23 && r < 31)
	{
		malla[i][j] = argv[c][r];
		r = r + 2;
		i++;
	}
	condiciones(malla);
	i = 0;
	j = 0;
	while (i <= 5)
	{
		j = 0;

		while (j >= 0 && j <= 5)
		{

			if (malla[i][j] == '1' || malla[i][j] == '2' || malla[i][j] == '3' || malla[i][j] == '4')
				write(1, &malla[i][j], 1);
			else
				write(1, " ", 1);
			j++;
		}
		write(1, &salto, 1);
		i++;
	}
	return (0);
}
