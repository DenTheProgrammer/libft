/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:27:10 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/03 21:59:22 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t intlen(int n)
{
	size_t len;

	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char    *ft_itoa(int n)
{
    char *res;
    size_t len;
    int min = 1;

    len = intlen(n);
    res = ft_strnew(len);
    if (n < 0)
    {
        res[0] = '-';
        min = -1;
    }
    while (len)
    {
        if (min == -1 && len == 1)
          break ;
        res[--len] = min * (n % 10) + '0';
        n /= 10;
    }
    return (res);
}
