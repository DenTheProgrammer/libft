/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:58:01 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/03 21:26:43 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		get_word_count(const char *s, char del)
{
	size_t i;
	size_t strlen;
	size_t count;

	strlen = ft_strlen(s);
	count = 0;
	i = 0;
	while (i < strlen)
	{
		if (s[i] != del && s[i + 1] == del)
			count++;
		i++;
	}
	return (count);
}

int		get_word_len(int start_ind, const char *s, char del)
{
	int i;

	i = 0;
	while (s[start_ind + i] != del)
		i++;
	return (i);
}

void	str_copy(const char *src, char *dest, int src_len)
{
	int i;

	i = 0;
	while (i < src_len - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_strsplit(char const *s, char c)
{
	size_t		i;
	char	**res;
	int		word_len;
	int		curr_word_ind;
	size_t word_count;

	word_count = get_word_count(s, c);
	curr_word_ind = 0;
	i = 0;
	res = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	while (i < ft_strlen(s))
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
		{
			word_len = get_word_len(i, s, c);
			res[curr_word_ind] = (char *)malloc(sizeof(char) * (word_len + 1));
			str_copy(&s[i], &res[curr_word_ind][0], word_len + 1);
			curr_word_ind++;
			i += word_len;
		}
		i++;
	}
	res[word_count] = 0;
	return (res);
}
