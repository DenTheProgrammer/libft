#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *newstr;
	int i;

	i = -1;
	newstr = (char *)malloc(ft_strlen(s) + 1);
	while (s[++i])
		newstr[i] = f(i, s[i]);
	newstr[i] = '\0';
	return (newstr);
}
