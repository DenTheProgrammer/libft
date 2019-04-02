#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (i == n - 1)
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
