
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{

	char *new;
	unsigned int i;
	size_t x;
	int c;

	i = 0;
	x = 0;
	c = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)start)
		{
			while (s[i] != 0 && x < len)
			{
				i++;
				x++;
				c++;
			}
			new = (char*)malloc(x);
			while (c >= 0)
			{
				new[c] = s[i];
				i--;
				c--;
			}
			return (new);

		}
		i++;
	}
	return (NULL);
}
