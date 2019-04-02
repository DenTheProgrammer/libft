#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last = NULL;

	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	return ((*s == c) ? (char *)s : last);
}
