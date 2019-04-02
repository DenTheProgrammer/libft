#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t dest_len;
	size_t src_len;
	size_t i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
