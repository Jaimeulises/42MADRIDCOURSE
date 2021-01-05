

#include "libft.h"

void *ft_memset(void *s, int c, size_t len)
{
  int i;
  i = 0;
  char *str = s;
  i = ft_strlen(str);
  if ( i < (int)len)
  	return (NULL);

  i = 0;
  while (str[i] != 0 && i < (int)len)
  {
    str[i] = c;
    i++;
  }
  return (str);
}