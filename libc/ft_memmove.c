#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	void *tmp;

	tmp = malloc(n);
	if (!tmp)
		return(NULL);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}