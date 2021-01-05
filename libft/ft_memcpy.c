
#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	char *dest;
	const char *source;

	i = 0;
	dest = dst;
	source = src;

	if ( *dest == 0 || *source == 0)
		return (NULL);

	while (n > 0)
	{
		dest[i] = source[i];
		i++;
		n--;
	}
	return ((void*)(dest));
}
