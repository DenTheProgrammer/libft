/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 20:19:13 by mdebbi            #+#    #+#             */
/*   Updated: 2019/03/05 23:14:43 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_tolower(char *str)
{
	char *str_tmp;

	str_tmp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 'a' - 'A';
		str++;
	}
	return (str_tmp);
}