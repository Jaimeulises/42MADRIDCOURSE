
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int x;
	int l1;
	int l2;

	i = 0;
	x = 0;
	l1 = ft_strlen(haystack);
	l2 = ft_strlen(needle);
	if (needle[i] == 0)
		return ((char*)haystack);
	while (haystack[i] != 0 && len > 0)
	{
		l2 = ft_strlen(needle);
		if (haystack[i] == needle[x = 0])
		{
			while (haystack[i] == needle[x] && len > 0)
			{
				if (x == l2 - 1)
					return ((char*)&haystack[i - l2 + 1]);
				i++;
				x++;
				len--;
			}
			i--;
		}
		i++;
		len--;
	}
	return (NULL);
}
