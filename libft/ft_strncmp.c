
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{

int i;
int x;
int y;

i = 0;
x = ft_strlen(s1);
y = ft_strlen(s2);

while(n >= 0 && i <= x && i <= y)
{
	if(s1[i] != s2[i])
		return (s1[i] - s2[i]);

	n--;
	i++;
}
 return (0);

}

