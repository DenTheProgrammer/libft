/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: den <den@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:30:37 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/07 16:15:39 by den              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*((char *)dest + n) = *((char *)src + n);
	return (dest);
}
