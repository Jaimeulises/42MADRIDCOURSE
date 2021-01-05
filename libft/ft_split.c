
#include "libft.h"

int contador1(char const *s,char c)
{
	int i;
	int x;

	i = 0;
	x = 0;

	while (s[x] == c)
		x++;

	while (s[x] != 0)
	{
		if ((s[x + 1] != 0) && (s[x + 1] != c) && (s[x] == c))
			i++;
		x++;
	}
	return (i + 1);
}

int contador2(char const *s,char c)
{
	int i;
	int x;

	i = 0;
	x = 0;

	while (s[x] == c)
		x++;


	while (s[x] != 0 && s[x] != c)
	{
		i++;
		x++;
	}

	return (i);
}



char	**ft_split(char const *s,char c)
{

	char **out;
	int x;
	int y;
	int n;
	int m;

	x = 0;
	y = 0;
	n = contador1(s, c);
	m = 0;

	if (!(out = (char**)malloc(n * sizeof(char*))))
		return (NULL);

	while (x < n)
	{
		if (!(out[x] = (char*)malloc(contador2(&s[m],c)*sizeof(char))))
			return (NULL);

		while (s[m] == c)
			m++;
		while (s[m] != 0 && s[m] != c)
		{
			out[x][y] = s[m];
			m++;
			y++;
		}
		y = 0;
		x++;
	}
		out[x] = 0;

	return (out);
}
