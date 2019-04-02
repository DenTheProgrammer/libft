#include "libft.h"

char	*strdup(const char *s)
{
	char *dup;

	dup = (char *)malloc(ft_strlen(s) + 1);
	return (ft_strcpy(dup, s));
}
