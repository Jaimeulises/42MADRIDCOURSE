
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *d;

	d = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));

	if (d == NULL)
		return (NULL);

	ft_strlcpy(d, s, ft_strlen(s) + 1);

	return (d);
}
