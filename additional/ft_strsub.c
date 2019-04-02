#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *newstr;
	unsigned int i;

	i = 0;
	newstr = ft_strnew(len);
	while (i++ < start)
		s++;
	return (ft_strncpy(newstr, s, len));
}
