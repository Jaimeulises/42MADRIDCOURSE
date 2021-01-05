


#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{

	char	*out;
	int	x;
	int	y;
	int	c;
	if (s1 == 0 || s2 == 0)
		return (NULL);

	y = strlen(s2);
	x = strlen(s1);
	c = x + y;

	out = (char*)malloc((sizeof(char))*(x + y + 1));

    if(out == 0)
        return (NULL);

	
	ft_memcpy(out,s1,(size_t)x);
	ft_strlcpy(&out[x],s2,(size_t)y + 1);
	
	return(out)
	
	while (*s1 != 0)


	{
		*out = *s1;
		out++;
		s1++;
	}
	whil











    while(s1[x - 1] != 0 || s2[y - 1] != 0)
    {
        if(s1[x - 1] != 0)
        {
        out[x - 1] = s1[x - 1];
        x--;
        }
        if(s2[y - 1] != 0)
        {
        out[c - 1] = s2[y - 1];
        y--;
        c--;
        }
    }
    return(out);

}
