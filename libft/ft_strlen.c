

#include "libft.h"

size_t ft_strlen(const char *s)
{
 int i;

 i = 0;

 while(s[i] != 0)
	i++;

return ((size_t)i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	int		i;

	i = 0;
	if ((!s))
		return (NULL);
	if (start > ft_strlen((char *)s))
	{
		if (!(src = malloc(sizeof(char))))
			return (NULL);
		src[0] = '\0';
		return (src);
	}
	if (!(src = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (s[start] && len--)
	{
		src[i] = (char)s[start];
		start++;
		i++;
	}
	src[i] = '\0';
	return (src);
}