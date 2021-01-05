
#include "libft.h"

int ft_isalnum(int c)
{
 int x;
 int i;

 x = ft_isalpha(c);
 i = ft_idigit(c);

return(( x > 0 || i > 0) ? 1 : 0);


}
