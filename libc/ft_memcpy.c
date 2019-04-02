#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void *destcpy;

	destcpy = dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (destcpy);
}
