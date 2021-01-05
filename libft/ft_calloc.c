

#include "libft.h"

void *ft_calloc(size_t N, size_t P)
{

	void *string;
	size_t c;

	c = N*P;

	string = (void*)malloc(c);

	if (!string)
 	return(NULL);

	ft_bzero (string, c);

	return (string);
}
