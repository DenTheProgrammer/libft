/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:35:49 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/02 21:48:04 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t i;
	char *mem;
	
	mem = (char *)malloc(size);
	if (!mem)
		return (NULL);
	while (i < size)///??
		mem[i++] = 0;
	return ((void *)mem);		
}
