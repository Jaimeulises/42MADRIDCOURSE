
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	unsigned char p;
	char *dest;
	const char *source;

	i = 0;
	p = c;
	dest = dst;
	source = src;

	if (*dest == 0 || *source == 0)
		return (NULL);

	while (n > 0)
	{
		dest[i] = source[i];
		if (dest[i] == p)
			return ((void*)(dest + i + 1));
		i++;
		n--;
	}
	return (NULL);
}
