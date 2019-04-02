#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *res;
	size_t len1;
	size_t len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = (char *)malloc(len1 + len2 + 1);
	if (!res)
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcpy(res + len1, s1);
	return (res);
}
