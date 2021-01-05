
#include "libft.h"

/*int main() memcpy
{
	char s1[15]= "tghthhth"; 
	char s2[30]= "hola";

	//ft_bzero(s1,15);
	ft_bzero(s2,30);
	printf("%s",memcpy(s1,s2,5));

	return (0);
}
*/
 
//*int main() memset
{
	char s1[15]= "coucou"; 
	char s2[30]= "(null)";
	char prueba = '\0';

	//ft_bzero(s1,15);
	//ft_bzero(s2,30);
	memset(s1,prueba,3);
	printf("%c",s1[4]);

	return (0);
}
*/

/*int main()
{ itoa
	char s1[15]= "coucou"; 
	char s2[30]= "(null)";
	int p = -2147483648;
	char *a = ft_itoa(p);

	//ft_bzero(s1,15);
	//ft_bzero(s2,30);
	printf("%s",a);
	//free(a);
	a = NULL;
	system("leaks a.out");
	//free(a);
	return (0);
}
*/