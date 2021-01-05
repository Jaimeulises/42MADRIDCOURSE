

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{

	int i;
	size_t x;

	i = 0;
	x = 0;
	while (dstsize - 1 > 0 && src[i] != 0)
	{
		dst[i] = src[i];
		dstsize--;
		i++;
		x++;
	}
	dst[i] = 0;
return(x + 1);
}

