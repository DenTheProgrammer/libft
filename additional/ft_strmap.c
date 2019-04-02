#include "libft.h"

char *  ft_strmap(char const *s, char (*f)(char))
{
	char *newstr;
	int i;

	i = -1;
	newstr = (char *)malloc(ft_strlen(s) + 1);
	while (s[++i])
		newstr[i] = f(s[i]);
	newstr[i] = '\0';
	return (newstr);
}
