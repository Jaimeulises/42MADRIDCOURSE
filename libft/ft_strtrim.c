
#include "libft.h"

int contador(char const *s1,char const *set,int y)
{
	int i;

	i = 0;
while (*s1 != 0)
	{
		while(ft_memcmp(s1,&set[0],((size_t)y)) == 0)
			s1 = s1 + y;
		s1++;
		i++;
	}
	return(i);
}

char	*ft_strtrim(char const *s1,char const *set)
{

	int	x;
	int	y;
	int i;
	char	*out;

	x = ft_strlen(s1);
	y = ft_strlen(set);
	i = 0;
	out = (char*)malloc(contador(s1,set,y));

	while (*s1 != 0)
	{
		while(ft_memcmp(s1,&set[0],((size_t)y)) == 0)
			s1 = s1 + y;
		out[i] = *s1;
		s1++;
		i++;
	}
	if (!out)
		return (NULL);

	return (out);
}

