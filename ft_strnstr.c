/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <mdebbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:32:33 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/05 15:32:42 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
