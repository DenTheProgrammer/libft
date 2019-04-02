#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{

	while (n--)
	{
		*(char *)dest++ = *(char *)src++;
		if (*((char *)dest - 1) == c)
			return (dest);
	}
	return (NULL);
}
