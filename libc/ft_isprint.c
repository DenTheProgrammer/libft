#include "libft.h"

int     ft_isprint(int c)
{
	return (ft_isascii(c) && c > 31 && c < 127);
}
