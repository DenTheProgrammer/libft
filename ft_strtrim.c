/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 19:28:21 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/03 20:36:35 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	char	*trimmed;
	int		i;
	size_t	befsp;
	size_t	aftsp;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	befsp = 0;
	aftsp = 0;
	while (is_space(s[i++]))
		befsp++;
	i = len;
	while (is_space(s[--i]))
		aftsp++;
	trimmed = (char *)malloc(len - befsp - aftsp + 1);
	if (!trimmed)
		return (NULL);
	ft_strcpy(trimmed, ft_strsub(s, (unsigned int)befsp, len - befsp - aftsp));
	return (trimmed);
}
