

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{

	int i ;
	unsigned char *string;

	i = 0;
	string = (unsigned char *)s;
	while (n > 0)
	{
		if (string[i] == (unsigned char)c)
			return ((void*)(s + i));
		i++;
		n--;
	}
 return (NULL);
}
