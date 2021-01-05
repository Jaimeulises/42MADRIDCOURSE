

#include "libft.h"

int ft_atoi(const char *str)
{

	int i;
	int n;
	int x;
	int p;

	i = 0;
	n = 0;
	x = 0;
	p = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	if (*str == 45)
		n++;
	if (*str == 45 || *str == 43)
		str++;

	while (*str >= 48 && *str <= 57)
	{
		x = x * 10 + (*str - 48);
		str++;
		i++;
	}
	if (i > 19)
		return (n > 0 ? -1 : 0);
	if (i)
	{
		return ((n > 0) ? (x * -1) : x);
	}
	else
		return (0);
}
