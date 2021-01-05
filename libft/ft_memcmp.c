

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *st1;
	const unsigned char *st2;
	int i;

	st1 = (const unsigned char*)s1;
	st2 = (const unsigned char*)s2;
	i = 0;
	while (n > 0)
	{
		if (st1[i] != st2[i])
			return ((unsigned int)(st1[i] - st2[i]));
		i++;
		n--;
	}
	return (0);
}

