
#include "libft.h"

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{

	char *new;
	if ((!s))
		return (NULL);
	if(start > ft_strlen((char*)s))
	{
		new = malloc(sizeof(char));
		if(new == 0)
			return(NULL);
		new[0] = 0;
	}
	new = malloc((len + 1) * sizeof(char));
	if(new == 0)
			return(NULL);

	ft_strlcpy(new, s, len + 1);

	return(new);

}

int main()
{
	size_t prueba = 3;
	int m;

	char	s1[9] = "Holaara";
	const char s2[11] = "lorem";

	
	m = ft_strncmp("abcdefghij","abcdefgxyz",3);

	printf("%d",m);
}